#include <iostream>
#include <string>
#include <random>
#include "input_validation.h"
#include "random.h"
#include "game.h"



int main(int argc, char* argv[]) {
    int seed;
    if(argc == 2) {
        seed = std::stoi(argv[1]);
    }
//    else {
//        seed = std::chrono::system_clock::now().time_since_epoch().count();
//    }

    std::minstd_rand generator(seed);

    std::string replay_input ="";

    while(true && replay_input != "n") {
        auto user_choice = get_user_choice();
        auto ai_choice = get_random_int(generator);
        check_for_winner(user_choice, ai_choice);
        if(check_for_tie(user_choice, ai_choice)){
            continue;
        }
        replay_input = ask_for_replay();
    }


    return 0;
}
