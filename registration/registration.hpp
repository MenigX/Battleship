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
            field1 = register_ships(field1);
            fields.first = field1;
            Field field2;
            fields.second = field2;
            Player player(name, fields);

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

            return bot;
        }
    private:
        Field register_ships(Field field){
            int x1, x2, y1, y2;
            pair<int, int> cords;
            for (int i = 0; i < 1; i++){
                cout << "Укажите точки для корабля(x1, y1, x2, y2): ";
                cin >> x1 >> y1 >> x2 >> y2;
                if (x1 == x2){
                    for (int i = y1; i <= y2; i++){
                        cords.first = x1;
                        cords.second = i;
                        field.change(cords, 'X');
                    }
                }
                else {
                    for (int i = x1; i <= x2; i++){
                        cords.first = i;
                        cords.second = y1;
                        field.change(cords, 'X');
                    }
                }
            }
            
            return field;
        }
};