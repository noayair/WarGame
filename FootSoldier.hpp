#pragma once
#include "Soldier.hpp"
class FootSoldier: public virtual Soldier{
public:
  FootSoldier(int p):Soldier(p , 10 , 100 , {0,0} , "Foot") {}
  FootSoldier():Soldier() {}
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
  pair<int,int> find_closest(pair<int,int> l, std::vector<std::vector<Soldier*>>& board); // find the closest soldier to shoot him
};