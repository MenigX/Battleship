#include <bits/stdc++.h>
#include "../field.hpp"

#ifndef USER_HPP
#define USER_HPP

using namespace std;

class User{
    public:
        User(string name, pair<Field, Field> fields){
                this->name = name;
                this->ship = 10;
                this->fields = fields;
            }

        string get_name(){
            return name;
        }

        pair<Field, Field> get_fields(){
            return fields;
        }
        // TODO(заглушка)
        void change_field(int num, pair<int, int> cords, char symbol){
            if (num == 1){
                fields.first.change(cords, symbol);
            }
            else {
                fields.second.change(cords, symbol);
            }
        }


    private:
        string name;
        int ship;
        pair<Field, Field> fields;
};


#endif