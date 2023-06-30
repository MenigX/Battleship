#include <bits/stdc++.h>
#include "user.hpp"
#include "../field.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

using namespace std;

class Player: public User{
    public:
        using User::User;
        pair<int, int> shoot(){
            pair<int, int> cords;
            cout << "Введите координаты для выстрела(x, y): ";
            cin >> cords.second >> cords.first;
            return cords;
        }


    
};


#endif