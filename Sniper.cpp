#include "Sniper.hpp"
#include "Soldier.hpp"
// using namespace WarGame;

   //  void Sniper:: shoot(Soldier s){
        
   //  }
   void Sniper:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      // pair<int,int> target = find_strongest(l, board);
      // int points = board[target.first][target.second]->healthPoints;
      // int damage = board[l.first][l.second]->damage;
      // board[target.first][target.second]->healthPoints = points - damage;
      // if(board[target.first][target.second]->healthPoints <= 0)
      // {
      //    delete board[target.first][target.second];
      //    board[target.first][target.second] = NULL;
      // }
   }

   pair<int,int> find_strongest(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
   {
      pair<int,int> ans = {0,0};
      // int to_shoot;
      // double strongest = 1000;
      // double temp;
      // if(board[l.first][l.second]->player == 1)
      // {
      //    to_shoot = 2;
      // }else{
      //    to_shoot = 1;
      // }
      // for(int i = 0; i < board.size(); i++)
      // {
      //    for(int j = 0; j < board[i].size(); j++)
      //    {
      //       if(board[i][j] != NULL && board[i][j]->player == to_shoot)
      //       {
      //          // dist = sqrt(pow(l.first-i, 2) + pow(l.second-j , 2));
      //          temp = board[i][j]->healthPoints;
      //       }
      //       if(temp > strongest)
      //       {
      //          strongest = temp;
      //          ans.first = i;
      //          ans.second = j;
      //       }
      //    }
      // }
      return ans;
   }
