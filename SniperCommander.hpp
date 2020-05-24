#include "Soldier.hpp"
namespace WarGame{
class SniperCommander: public Soldier{
public:
  SniperCommander(int p):Soldier(p , 100 , 120) {}
  SniperCommander():Soldier() {}
  void shoot(Soldier s);
  void act(Soldier s);
};
}