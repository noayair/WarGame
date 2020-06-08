#pragma once
#include "Paramedic.hpp"
class ParamedicCommander: public Paramedic{
  public:
    ParamedicCommander(int p): Soldier(p, 0, 200, {0,0}, "ParamedicCommander") {}
    void act(pair<int,int> l, std::vector<std::vector<Soldier*>>& board) override;
    void actAll(pair<int,int> l, std::vector<std::vector<Soldier*>>& board);
};