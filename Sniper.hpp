#include "Soldier.hpp"
namespace WarGame{
class Sniper: public Soldier{
public:
  Sniper(int p):Soldier(p,50,100 , {0,0}, "Sniper") {}
  Sniper():Soldier() {}
  // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
  pair<int,int> find_strongest(pair<int,int> l, std::vector<std::vector<Soldier*>>& board);
};
}