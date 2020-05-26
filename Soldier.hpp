#pragma once
#include <string>
#include <vector>
#include <stdexcept>
// #include "Board.hpp"
using namespace std;
// namespace WarGame {
class Soldier {
public:
  int healthPoints;
  int damage;
  int player;
  pair<int,int> location;
  const string tag;
  Soldier(): healthPoints(0), damage(0), player(0) , location(0,0) , tag(NULL) {} 
  Soldier(int p, int d , int h, pair<int,int> l, string t): player(p), damage(d), healthPoints(h), location(l), tag(t) {}
  // virtual void shoot(Soldier s);
  virtual void act(pair<int,int> l,std::vector<std::vector<Soldier*>>& board){}
  virtual ~Soldier(){}
};
// }