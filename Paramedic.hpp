#pragma once
#include "Soldier.hpp"
class Paramedic: public virtual Soldier{
  public:
  Paramedic(int p): Soldier(p, 0, 100, {0,0}, "Paramedic") {}
  Paramedic(): Soldier() {}
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
};