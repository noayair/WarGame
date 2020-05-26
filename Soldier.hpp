#pragma once
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
// namespace WarGame {
class Soldier {
  int healthPoints;
  int damage;
  int player;
  pair<int,int> location;
  const string tag;
public:
  //constructors
  Soldier(): healthPoints(0), damage(0), player(0) , location(0,0) , tag(NULL) {} 
  Soldier(int p, int d , int h, pair<int,int> l, string t): player(p), damage(d), healthPoints(h), location(l), tag(t) {}
  virtual void act(pair<int,int> l,std::vector<std::vector<Soldier*>>& board){}
  //Getters and Setters
  int getHP(){return this->healthPoints;}
  int getP(){return this->player;}
  int getD(){return this->damage;}
  void setHP(int points){this->healthPoints = points;}
  string getT(){return this->tag;}
  virtual ~Soldier(){}
};
// }