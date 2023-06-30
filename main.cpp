#include <bits/stdc++.h>
#include "game.hpp"
#include "registration/registration.hpp"

using namespace std;

int main(){
    Game game;
    Registration App;
    game.start(App.register_player(), App.register_bot());
}
