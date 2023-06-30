#include <bits/stdc++.h>
#include "user.hpp"
#include "../field.hpp"
#include "../render.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

using namespace std;

class Player: public User{
    public:
        using User::User;
        pair<int, int> shoot(){
            pair<int, int> cords;
            cout << "Введите координаты для выстрела(x, y): ";
            cin >> cords.first >> cords.second;
            return cords;
        }
        void build_ships(){
            int x1, x2, y1, y2;
            pair<int, int> cords;
            for (int i = 0; i < 10; i++){
                cout << "Укажите точки для корабля(x1, y1, x2, y2): ";
                cin >> x1 >> y1 >> x2 >> y2;
                if (x1 == x2){
                    for (int i = y1; i <= y2; i++){
                        cords.first = x1;
                        cords.second = i;
                        change_field(1, cords, 'X');
                    }
                }
                else {
                    for (int i = x1; i <= x2; i++){
                        cords.first = i;
                        cords.second = y1;
                        change_field(1, cords, 'X');
                    }
                }
                Render render;
                render.render(get_fields().first);
            }
        }

    
};


#endif