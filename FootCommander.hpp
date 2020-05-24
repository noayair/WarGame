#include "FootSoldier.hpp"
namespace WarGame{
class FootCommander: public FootSoldier{
  public:
  FootCommander(int p): FootSoldier(p, 20 , 150) {}
  FootCommander(): FootSoldier() {}
  // void shoot(Soldier s);
  void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
};
}