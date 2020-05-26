// #pragma once
#include "Board.hpp"

namespace WarGame{
    Soldier*&  WarGame::Board::operator[](std::pair<int,int> location){
        return board[location.first][location.second];
    }
    Soldier* WarGame::Board ::operator[](std::pair<int,int> location) const{
        return board[location.first][location.second];
    }
    void WarGame::Board ::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        if(source.first > board.size() || source.first < 0 || source.second > board[0].size() || source.second < 0) __throw_out_of_range("out of range");
        Soldier* temp = board[source.first][source.second];
        if(temp == nullptr) throw("Error-nullptr");
        if(temp->getP() != player_number) throw("this is not the right player");
        switch ((direction))
        {
        case Up:
            source.first++;
            if(board[source.first][source.second] != nullptr) throw("There is already a soldier");
            if(source.first >= board.size()) __throw_out_of_range("Error- out of range");
            board[source.first-1][source.second] = nullptr;
            board[source.first][source.second] = temp;
            break;
        
        case Down:
            source.first--;
            if(board[source.first][source.second] != nullptr) throw("There is already a soldier");
            if(source.first < 0) __throw_out_of_range("Error- out of range");
            board[source.first+1][source.second] = nullptr;
            board[source.first][source.second] = temp;
            break;

        case Left:
            source.second--;
            if(board[source.first][source.second] != nullptr) throw("There is already a soldier");
            if(source.second < 0) __throw_out_of_range("Error- out of range");
            board[source.first][source.second+1] = nullptr;
            board[source.first][source.second] = temp;
            break;

        case Right:
            source.second++;
            if(board[source.first][source.second] != nullptr) throw("There is already a soldier");
            if(source.second >= board[0].size()) __throw_out_of_range("Error- out of range");
            board[source.first][source.second-1] = nullptr;
            board[source.first][source.second] = temp;
            break;  

        default:
            throw("Error");
            break;
        }
        temp->act({source.first,source.second}, board);
        for (int i=0; i < board.size(); i++){
            for (int j=0; j < board[0].size(); j++){
                if (board[i][j] != nullptr && board[i][j]->getHP() <=0) board[i][j] = nullptr;
            }
        }
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