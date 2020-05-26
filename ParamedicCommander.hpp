#pragma once
#include "Soldier.hpp"
namespace WarGame{
class ParamedicCommander: public Soldier{
   public:
   ParamedicCommander(int p);
    // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
};
}