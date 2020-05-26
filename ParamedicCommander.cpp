#include "ParamedicCommander.hpp"
// #include "Soldier.hpp"
// using namespace WarGame;

  void ParamedicCommander:: act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
  {
    Paramedic:: act(l, board);
    actAll(l, board);
  }

  void ParamedicCommander:: actAll(pair<int,int> l, std::vector<std::vector<Soldier*>>& board)
  {
    int to_heal;
      if(board[l.first][l.second]->getP() == 1)
      {
         to_heal = 1;
      }else{
         to_heal = 2;
      }
      for(int i = 0; i < board.size(); i++)
      {
         for(int j = 0; j < board[i].size(); j++)
         {
            Soldier* temp = board[i][j];
            if(temp != NULL && temp->getP() == to_heal)
            {
               if(temp->getT() == "Paramedic")
               {
                  temp->act(l,board);
               }
            }
         }
      }
  }
