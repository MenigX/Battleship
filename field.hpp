#include <bits/stdc++.h>
#ifndef FIELD_HPP
#define FIELD_HPP

using namespace std;

class Field{
    public:
        Field(){
            vector<vector<char>> field;
            for (int i = 0; i < 10; i++){
                vector<char> temp;
                for (int j = 0; j < 10; j++){
                    temp.push_back('.');
                }
                field.push_back(temp);
            }
            this->field = field;
        }

        vector<vector<char>> get_field(){
            return field;
        }

        void change(pair<int, int> cords, char symbol){
            vector<vector<char>> field = create_copy(this->field);
            cords.first -= 1;
            cords.second -= 1;
            field[cords.second][cords.first] = symbol;
            this->field = field;
        }

        bool check_ship(pair<int, int> cords){
            if (field[cords.first][cords.second] == 'X'){
                return true;
            }
            else{
                return false;
            }
        }

        private:
            vector<vector<char>> field;

            template<typename T>
            std::vector<T> create_copy(std::vector<T> const &vec)
            {
                std::vector<T> v(vec);
                return v;
            }
};
#endif