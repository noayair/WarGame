#include "FootSoldier.hpp"
#include "Soldier.hpp"
#include <iostream>
#include <vector>
#include <cmath>
// using namespace WarGame;

  void FootSoldier:: act(pair<int,int> l , std::vector<std::vector<Soldier*>>& board)
  {
    cout<< l.first<<l.second<<endl;
    pair<int,int> target = find_closest(l , board);
    if(target.first != -1 && target.second != -1)
    {
      cout<<target.first<< target.second << endl;
      int points = board[target.first][target.second]->getHP();
      int damage = board[l.first][l.second]->getD();
      board[target.first][target.second]->setHP(points - damage);
      cout<<"if"<<endl;
      if(board[target.first][target.second]->getHP() <= 0)
      {
        delete board[target.first][target.second];
        cout<<"delete"<<endl;
        board[target.first][target.second] = NULL;
      }
    }
  }

  pair<int,int> FootSoldier:: find_closest(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
  {
    pair<int,int> ans = {-1,-1};
    int to_shoot = -1;
    double min = board.size()+board[0].size();
    double dist = 0;
    if(board[l.first][l.second] != nullptr && board[l.first][l.second]->getP() == 1)
    {
      to_shoot = 2;
    }else{
      to_shoot = 1;
    }
    for(int i = 0; i < board.size(); i++)
    {
      for(int j = 0; j < board[0].size(); j++)
      {
        if(board[i][j] != nullptr && board[i][j]->getP() == to_shoot)
        {
          dist = sqrt(pow(l.first-i, 2) + pow(l.second-j , 2));
          // dist = abs(i-l.first)+abs(j-l.second);
        }
        if(dist < min)
        {
          min = dist;
          ans.first = i;
          ans.second = j;
        }
      }
    }
    return ans;
  }
