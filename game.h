//
// Created by Quan Nguyen on 4/24/22.
//

#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H

bool check_for_win(std::string user_choice, int ai_choice);
bool check_for_loss(std::string user_choice, int ai_choice);
bool check_for_tie(std::string user_choice, int ai_choice);
void check_for_winner(std::string user_choice, int ai_choice);
std::string clean_string(std::string string);
#endif //ROCKPAPERSCISSORS_GAME_H
