#include "Sniper.hpp"
#include "Soldier.hpp"

   void Sniper:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      pair<int,int> target = find_strongest(l, board);
      if(target.first != -1 && target.second!= -1)
      {
      int points = board[target.first][target.second]->getHP();
      int damage = board[l.first][l.second]->getD();
      board[target.first][target.second]->setHP(points - damage);
      if(board[target.first][target.second]->getHP() <= 0)
      {
         delete board[target.first][target.second];
         board[target.first][target.second] = nullptr;
      }
      }
   }

   pair<int,int> Sniper:: find_strongest(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      pair<int,int> ans = {-1 , -1};
      int to_shoot;
      double strongest = -1;
      double temp = -1;
      if(board[l.first][l.second]->getP() == 1)
      {
         to_shoot = 2;
      }else{
         to_shoot = 1;
      }
      for(int i = 0; i < board.size(); i++)
      {
         for(int j = 0; j < board[i].size(); j++)
         {
            if(board[i][j] != NULL && board[i][j]->getP() == to_shoot)
            {
               temp = board[i][j]->getHP();
            }
            if(temp > strongest)
            {
               strongest = temp;
               ans.first = i;
               ans.second = j;
            }
         }
      }
      return ans;
   }
