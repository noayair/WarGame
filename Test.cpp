// #include "doctest.h"
// #include "DemoGame.hpp"
// #include "FootSoldier.hpp"
// #include "FootCommander.hpp"
// #include "Paramedic.hpp"
// #include "ParamedicCommander.hpp"
// #include "Sniper.hpp"
// #include "SniperCommander.hpp"

// using namespace WarGame;

// TEST_CASE ("Game 1"){

// 		DemoGame(): board (8, 8) {
// 			// Add soldiers for player 1:
// 			assert(!board.has_soldiers(1));
// 			board[{0,1}] = new FootSoldier(1);
// 			board[{0,3}] = new FootCommander(1);
// 			board[{0,5}] = new FootSoldier(1);
// 			assert(board.has_soldiers(1));

// 			// Add soldiers for player 2:
// 			assert(!board.has_soldiers(2));
// 			board[{7,1}] = new FootSoldier(2);
// 			board[{7,3}] = new FootCommander(2);
// 			board[{7,5}] = new FootSoldier(2);
// 			assert(board.has_soldiers(2));

// 			// In your game, you can put more soldier types, such as the sniper and the paramedic types.
// 		}
//        CHECK(DemoGame. == bool(true));
//  DemoGame.play
//     Board board = Board(8,8);
//     board[{0,1}] = new FootSoldier(1);
// 	board[{0,3}] = new FootCommander(1);
// 	board[{0,5}] = new FootSoldier(1);
//     board[{7,1}] = new FootSoldier(2);
// 	board[{7,3}] = new FootCommander(2);
// 	board[{7,5}] = new FootSoldier(2);
//     CHECK(board[{0,1}] == bool(true));
//     CHECK(board.has_soldiers(2) == bool(true));
//     CHECK(board.has_soldiers(2) == bool(true));




// }
#include "doctest.h"
#include "DemoGame.hpp"  

TEST_CASE("Test"){
    WarGame::DemoGame demoGame;
    for (int i=0; i<101; i++) {
        CHECK(demoGame.play()==0);
    }
}