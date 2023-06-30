#include <bits/stdc++.h>
#include "../field.hpp"
#include "../users/player.hpp"
#include "../users/bot.hpp"

using namespace std;

class Registration{
    public:
        Player register_player(){

            string name;
            cout << "Введите имя пользователя: ";
            cin >> name;

            pair<Field, Field> fields;
            Field field1;
            fields.first = field1;
            Field field2;
            fields.second = field2;
            Player player(name, fields);
            player.build_ships();

            return player;
        }

        Bot register_bot(){

            string name = "Bot";

            pair<Field, Field> fields;
            Field field1;
            fields.first = field1;
            Field field2;
            fields.second = field2;
            Bot bot(name, fields);
            bot.build_ships();

            return bot;
        }      
};