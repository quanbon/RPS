//
// Created by Quan Nguyen on 4/24/22.
//
#include <iostream>
#include <algorithm>
#include "input_validation.h"

std::string clean_string(std::string string) {
    auto user_choice = string;
    lower(user_choice);
    user_choice.erase(remove(user_choice.begin(), user_choice.end(), '('), user_choice.end());
    user_choice.erase(remove(user_choice.begin(), user_choice.end(), ')'), user_choice.end());
    user_choice.erase(user_choice.begin() + 1, user_choice.end());

    return user_choice;

}

bool check_for_win(std::string user_choice, int ai_choice) {
    // 0 Rock
    // 1 Paper
    // 2 Scissors
    auto clean_choice = clean_string(user_choice);
    if(clean_choice == "r" && ai_choice == 2) {
        std::cout<< " The ai played scissors." << std::endl << "You win!\n";
        return true;
    } else if (clean_choice == "p" && ai_choice == 0) {
        std::cout<< " The ai played rock." << std::endl << "You win!\n";
        return true;
    } else if (clean_choice == "s" && ai_choice == 1) {
        std::cout<< " The ai played paper." << std::endl << "You win!\n";
        return true;
    }
    return false;
}

bool check_for_loss(std::string user_choice, int ai_choice) {
    // 0 Rock
    // 1 Paper
    // 2 Scissors
    auto clean_choice = clean_string(user_choice);
    if(clean_choice == "r" && ai_choice == 1) {
        std::cout<< " The ai played paper." << std::endl << "The AI wins :(\n";
        return true;
    } else if (clean_choice == "p" && ai_choice == 2) {
        std::cout<< " The ai played scissors." << std::endl << "The AI wins :(\n";
        return true;
    } else if (clean_choice == "s" && ai_choice == 0) {
        std::cout<< " The ai played rock." << std::endl << "The AI wins :(\n";
        return true;
    }
    return false;
}

bool check_for_tie(std::string user_choice, int ai_choice) {
    // 0 Rock
    // 1 Paper
    // 2 Scissors
    auto clean_choice = clean_string(user_choice);
    if(clean_choice == "r" && ai_choice == 0) {
        std::cout<< "You and the AI both played rock." << std::endl << "Keep playing until someone wins.\n";
        return true;
    } else if (clean_choice == "p" && ai_choice == 1) {
        std::cout<< "You and the AI both played paper." << std::endl << "Keep playing until someone wins.\n";
        return true;
    } else if (clean_choice == "s" && ai_choice == 2) {
        std::cout<< "You and the AI both played scissors." << std::endl << "Keep playing until someone wins.\n";
        return true;
    }
    return false;
}

void check_for_winner(std::string user_choice, int ai_choice) {
    check_for_win(user_choice, ai_choice);
    check_for_loss(user_choice, ai_choice);
}

