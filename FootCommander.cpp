#include "FootCommander.hpp"

   void FootCommander:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      FootSoldier:: act(l , board);
      actAll(l, board);
   }

   void FootCommander:: actAll(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      int to_shoot;
      if(board[l.first][l.second] != nullptr && board[l.first][l.second]->getP() == 1)
      {
         to_shoot = 2;
      }else{
         to_shoot = 1;
      }
      for(int i = 0; i < board.size(); i++)
      {
         for(int j = 0; j < board[i].size(); j++)
         {
            Soldier* temp = board[i][j];
            if(temp != NULL && temp->getP() != to_shoot)
            {
               if(temp->getT() == "Foot")
               {
                  temp->act({i,j},board);
               }
            }
         }
      }
   }
