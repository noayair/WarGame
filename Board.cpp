// #pragma once
#include "Board.hpp"
#include <iostream>

namespace WarGame{
    Soldier*&  WarGame::Board::operator[](std::pair<int,int> location){
        return board[location.first][location.second];
    }
    Soldier* WarGame::Board ::operator[](std::pair<int,int> location) const{
        return board[location.first][location.second];
    }
    void WarGame::Board ::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        int x = source.first;
        int y = source.second;
        if(x >= board.size() || x < 0 || y >= board[x].size() || y < 0) __throw_out_of_range("out of range");
        Soldier* temp = board[x][y];
        if(temp == nullptr) throw("Error-nullptr");
        if(temp->getP() != player_number) throw("this is not the right player");
        switch ((direction))
        {
        case Up:
            x++;
            if(x >= board.size()) __throw_out_of_range("Error- out of range");
            if(board[x][y] != nullptr) __throw_out_of_range("There is already a soldier");
            board[x-1][y] = nullptr;
            board[x][y] = temp;
            break;
        
        case Down:
            x--;
            if(x < 0) __throw_out_of_range("Error- out of range");
            if(board[x][y] != nullptr) throw("There is already a soldier");
            board[x+1][y] = nullptr;
            board[x][y] = temp;
            break;

        case Left:
            y--;
            if(y < 0) __throw_out_of_range("Error- out of range");
            if(board[x][y] != nullptr) throw("There is already a soldier");
            board[x][y+1] = nullptr;
            board[x][y] = temp;
            break;

        case Right:
            y++;
            if(y >= board.size()) __throw_out_of_range("Error- out of range");
            if(board[x][y] != nullptr) throw("There is already a soldier");
            board[x][y-1] = nullptr;
            board[x][y] = temp;
            break;  

        default:
            throw("Error");
            break;
        }
        temp->act({x,y}, board);
    }
    bool WarGame::Board :: has_soldiers(uint player_number) const
    {
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != nullptr && board[i][j]->getP() == player_number) return true;
            }
        }
        return false;
    }
}