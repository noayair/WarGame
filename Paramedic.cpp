#include "Paramedic.hpp"
#include "Soldier.hpp"
using namespace WarGame;

   //  void Paramedic:: shoot(Soldier s){
        
   //  }
   void Paramedic:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      int to_heal;
      if(board[l.first][l.second]->player == 1)
      {
         to_heal = 1;
      }else{
         to_heal = 2;
      }
      for(int i = 0; i < board.size(); i++)
      {
         for(int j = 0; j < board[i].size(); j++)
         {
            if(board[i][j] != NULL && board[i][j]->player == to_heal)
            {
               if(board[i][j]->tag == "Foot")
               {
                  board[i][j]->healthPoints == 100;
               }
               if(board[i][j]->tag == "FootCommandor")
               {
                  board[i][j]->healthPoints == 150;
               }
               if(board[i][j]->tag == "Sniper")
               {
                  board[i][j]->healthPoints = 100; 
               }
               if(board[i][j]->tag == "SniperCommandor")
               {
                  board[i][j]->healthPoints == 120;
               }
               if(board[i][j]->tag == "Paramedic")
               {
                  board[i][j]->healthPoints == 100;
               }
               if(board[i][j]->tag == "ParamedicCommandor")
               {
                  board[i][j]->healthPoints == 200;
               }
            }
         }
      }
   }
