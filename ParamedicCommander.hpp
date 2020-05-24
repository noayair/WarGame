#include "Soldier.hpp"
namespace WarGame{
class ParamedicCommander: public Soldier{
   public:
   ParamedicCommander(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}