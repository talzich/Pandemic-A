//
// AUTHOUR: Tal Zichlinsky
// This is a test file made to test classes: Board, Player and all player roles (Medic, Scientist etc.)

#include "doctest.h"

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

#include <iostream>

using namespace std;
using namespace pandemic;

TEST_CASE("Drive"){
    Board b{};
    Player p{b, City::Atlanta};

    CHECK_NOTHROW(p.drive(City::Washington));
    CHECK(p.get_city() == City::Washington);
    CHECK_NOTHROW(p.drive(City::Atlanta));

    CHECK_NOTHROW(p.drive(City::Chicago));
    CHECK(p.get_city() == City::Chicago);
    CHECK_NOTHROW(p.drive(City::Atlanta));
    
    CHECK_NOTHROW(p.drive(City::Miami));
    CHECK(p.get_city() == City::Miami);
    CHECK_NOTHROW(p.drive(City::Atlanta));

    CHECK_THROWS(p.drive(City::Milan));
    CHECK_THROWS(p.drive(City::Montreal));
    CHECK_THROWS(p.drive(City::Moscow));
    CHECK_THROWS(p.drive(City::Mumbai));
    CHECK_THROWS(p.drive(City::NewYork));
    CHECK_THROWS(p.drive(City::Baghdad));
}

TEST_CASE("Fly Direct"){
    // Dispatcher flies without dropping cards while the other roles do.
    // Also, a player without the card of the appropriate city cannot fly to that city
    Board b{};
    OperationsExpert op_exp{b, City::Atlanta};
    Dispatcher disp{b, City::Atlanta};
    GeneSplicer gene_splcr{b, City::Atlanta};
    Medic medic{b, City::Atlanta};
    Virologist viro{b, City::Atlanta};

    disp.take_card(City::Baghdad);
    gene_splcr.take_card(City::Baghdad);
    medic.take_card(City::Baghdad);
    viro.take_card(City::Baghdad);

    int disp_cards = disp.num_of_cards();
    int gene_cards = gene_splcr.num_of_cards();
    int medic_cards = medic.num_of_cards();
    int viro_cards = viro.num_of_cards();

    op_exp.build();

    disp.fly_direct(City::Baghdad);
    CHECK(disp.get_city() == City::Baghdad);

    gene_splcr.fly_direct(City::Baghdad);
    CHECK(gene_splcr.get_city() == City::Baghdad);

    medic.fly_direct(City::Baghdad);
    CHECK(medic.get_city() == City::Baghdad);
    
    viro.fly_direct(City::Baghdad);
    CHECK(viro.get_city() == City::Baghdad);

    CHECK_EQ(disp_cards, disp.num_of_cards());
    CHECK_EQ(gene_cards - 1, gene_splcr.num_of_cards());
    CHECK_EQ(medic_cards - 1, medic.num_of_cards());
    CHECK_EQ(viro_cards - 1, viro.num_of_cards());

    CHECK_THROWS(op_exp.fly_direct(City::Baghdad));
}

TEST_CASE("Fly Shuttle"){
    // Flights cannot be made without cards and without research stations built in both cities
    
    Board b{};
    OperationsExpert op_exp{b, City::Atlanta};
    Dispatcher disp{b, City::Atlanta};
    GeneSplicer gene_splcr{b, City::Atlanta};
    Medic medic{b, City::Atlanta};
    Virologist viro{b, City::Atlanta};

    CHECK_THROWS(op_exp.fly_shuttle(City::Baghdad));
    CHECK_THROWS(disp.fly_shuttle(City::Baghdad));
    CHECK_THROWS(gene_splcr.fly_shuttle(City::Baghdad));
    CHECK_THROWS(medic.fly_shuttle(City::Baghdad));
    CHECK_THROWS(viro.fly_shuttle(City::Baghdad));

    // Operations expert now builds a research station in Atlanta, flies to Baghdad and builds one there too. 
    // Shuttle flights from Atlanta to Baghdad (and vice versa) should now be available
    op_exp.build();
    op_exp.take_card(City::Baghdad);
    op_exp.fly_direct(City::Baghdad);
    op_exp.build();

    CHECK_NOTHROW(disp.fly_shuttle(City::Baghdad));
    CHECK(disp.get_city() == City::Baghdad);

    CHECK_NOTHROW(gene_splcr.fly_shuttle(City::Baghdad));
    CHECK(gene_splcr.get_city() == City::Baghdad);

    CHECK_NOTHROW(medic.fly_shuttle(City::Baghdad));
    CHECK(medic.get_city() == City::Baghdad);
    
    CHECK_NOTHROW(viro.fly_shuttle(City::Baghdad));
    CHECK(viro.get_city() == City::Baghdad);

    CHECK_NOTHROW(disp.fly_shuttle(City::Atlanta));
    CHECK(disp.get_city() == City::Atlanta);

    CHECK_NOTHROW(gene_splcr.fly_shuttle(City::Atlanta));
    CHECK(gene_splcr.get_city() == City::Atlanta);

    CHECK_NOTHROW(medic.fly_shuttle(City::Atlanta));
    CHECK(medic.get_city() == City::Atlanta);
    
    CHECK_NOTHROW(viro.fly_shuttle(City::Atlanta));
    CHECK(viro.get_city() == City::Atlanta);
}
