#include <bits/stdc++.h>
#include "player.hpp"
#include "../field.hpp"


#ifndef BOT_HPP
#define BOT_HPP

using namespace std;

class Bot: public User{
    public:
        using User::User;

        pair<int, int> shoot(){
            int x = rand() % 10 + 1;
            int y = rand() % 10 + 1;
            pair<int, int> cords;
            cords.first = x;
            cords.second = y;
            return cords;
        }
        void build_ships(){}
};

#endif