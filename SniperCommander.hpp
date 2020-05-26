#pragma once
#include "Sniper.hpp"
// namespace WarGame{
class SniperCommander: public Sniper{
public:
  SniperCommander(int p):Soldier(p , 100 , 120, {0,0}, "SniperCommander") {}
  SniperCommander():Soldier() {}
  // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
  void actAll(pair<int,int> l, std::vector<std::vector<Soldier*>>& board);
};
// }