#pragma once
#include "Soldier.hpp"
// using namespace WarGame;
// namespace WarGame{
class FootCommander: public Soldier{
  public:
  FootCommander(int p): Soldier(p, 20 , 150, {0,0}, "FootCommander") {}
  FootCommander(): Soldier() {}
  // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
};
// }