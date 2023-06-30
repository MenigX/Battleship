#include <bits/stdc++.h>
#include "field.hpp"

#ifndef RENDER_HPP
#define RENDER_HPP

using namespace std;

class Render{
    public:
        void render(pair<Field, Field> fields){

            vector<vector<char>> field1 = fields.first.get_field();
            vector<vector<char>> field2 = fields.second.get_field();

            for(int x = 0; x < field1.size(); x++){
                for (int y = 0; y < field1.size(); y++){
                    cout << field1[x][y] << " ";
                }
                cout << "\t";
                for (int y = 0; y < field1.size(); y++){
                    cout << field2[x][y] << " ";
                }
                cout << endl;
            }
        }

        void render(Field field){
            vector<vector<char>> field1 = field.get_field();
            for (int x = 0; x < field1.size(); x++){
                for (int y = 0; y < field1.size(); y++){
                    cout << field1[x][y] << " ";
                }
                cout << endl;
            }
        }
};

#endif