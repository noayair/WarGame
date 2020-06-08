#pragma once
#include "FootSoldier.hpp"

class FootCommander: public FootSoldier{
  public:
  FootCommander(int p): Soldier(p, 20 , 150, {0,0}, "FootCommander") {}
  FootCommander(): Soldier() {}
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
  void actAll(pair<int,int> l, std::vector<std::vector<Soldier*>>& board);
};