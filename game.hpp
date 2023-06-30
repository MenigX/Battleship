#include <bits/stdc++.h>

#include "users/player.hpp"
#include "users/bot.hpp"
#include "render.hpp"


class Game{
    public:
        void start(Player player, Bot bot){
            while(true){
                if (turn == 1){
                    Render render;
                    render.render(player.get_fields());

                    pair<int, int> cords = player.shoot();
                    bool succes = bot.get_fields().first.check_ship(cords);
                    if (succes){
                        player.change_field(2, cords, 'P');
                        bot.change_field(1, cords, 'P');
                    } 
                    else{
                        player.change_field(2, cords, '*');
                        bot.change_field(1, cords, '*');
                    }
                }
                else {
                    
                }
                change_turn();
            }
        }


    private:
        int turn = 1;

        void change_turn(){
            turn *= -1;
        } 
};