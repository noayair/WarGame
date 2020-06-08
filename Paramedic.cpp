#include "Paramedic.hpp"
#include "Soldier.hpp"
// using namespace WarGame;

   void Paramedic:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      int to_heal;
      if(board[l.first][l.second]->getP() == 1)
      {
         to_heal = 1;
      }else{
         to_heal = 2;
      }
      int x = l.first;
      int y = l.second;
      for(int i = x - 1; i < x + 1; i++)
      {
         for(int j = y - 1; j < y + 1; j++)
         {
            if(i < 0 || j < 0 || i > board[0].size() || j > board.size() || i == x || j == y) continue;
            Soldier* temp = board[i][j];
            if(temp != NULL && temp->getP() == to_heal)
            {
               if(temp->getT() == "Foot")
               {
                  temp->setHP(100);
               }
               if(temp->getT() == "FootCommandor")
               {
                  temp->setHP(150);
               }
               if(temp->getT() == "Sniper")
               {
                  temp->setHP(100); 
               }
               if(temp->getT() == "SniperCommandor")
               {
                  temp->setHP(120);
               }
               if(temp->getT() == "Paramedic")
               {
                  temp->setHP(100);
               }
               if(temp->getT() == "ParamedicCommandor")
               {
                  temp->setHP(200);
               }
            }
         }
      }
   }