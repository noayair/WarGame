#pragma once
#include "Soldier.hpp"
namespace WarGame{
class Paramedic: public Soldier{
  public:
  Paramedic(int p): Soldier(p, 0, 100, {0,0}, "Paramedic") {}
  Paramedic(): Soldier() {}
  // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
  
};
}