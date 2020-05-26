#include "doctest.h"
// #include "DemoGame.hpp"  
#include "FootSoldier.hpp"
#include "Sniper.hpp"
#include "FootCommander.hpp"
#include "SniperCommander.hpp"
#include "Board.hpp"
using namespace WarGame;

// TEST_CASE("Test"){
//     WarGame::DemoGame demoGame;
//     for (int i=0; i<101; i++) {
//         CHECK(demoGame.play()==0);
//     }
// }

TEST_CASE("Foot soldiers") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Sniper soldiers") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new Sniper(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new Sniper(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 50
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 50 
    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Foot Commander") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new FootCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Foot commander 2") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new FootCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootCommander(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 20
    CHECK(!board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 20 
    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Sniper commander") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new SniperCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new Sniper(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 100

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Sniper commander 2") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new SniperCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new SniperCommander(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 100
    CHECK(board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 100

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}

TEST_CASE("Sniper commander 3") {
    Board board (8,1);

    CHECK(!board.has_soldiers(1));
    CHECK(!board.has_soldiers(2));
    board[{0,0}] = new SniperCommander(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootCommander(2);
    CHECK(board.has_soldiers(2));
    CHECK(!board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 100
    CHECK(board.has_soldiers(2));
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 100

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    CHECK_THROWS(board.move(2, {1,0}, Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {0,0}, Board::MoveDIR::Up));
}