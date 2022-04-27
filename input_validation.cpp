//
// Created by Quan Nguyen on 4/24/22.
//

#include <iostream>
#include <vector>
#include <sstream>
#include "game.h"



//Code from Lecture
void lowerInPlace(std::string& string) {
    for(auto& letter : string){
        letter = tolower(letter);
    }


}

//Code from Lecture
void lower(std::string& string) {
    lowerInPlace(string);
}

bool valid_words(const std::string& word_to_check) {
    std::string word_check = word_to_check;
    lower(word_check);
    std::vector<std::string> valid_words {"rock", "paper", "scissors", "(r)ock", "(p)aper", "(s)cissors", "r", "p", "s"};
    for(auto val_words: valid_words) {
        if(val_words == word_check) {
            return true;
        }
    }
    return false;
}

std::string get_user_choice() {
    std::string line;
    std::string prompt = "Enter (R)ock, (P)aper, or (S)cissors for your move:";

    while(true) {
        std::cout << prompt;
        std::getline(std::cin, line);
        std::stringstream line2parse(line);
        std::string word;
        line2parse >> word;
        if (line2parse) {
            std:: string what_is_left;
            line2parse >>what_is_left;
            if (not line2parse && valid_words(word)) {
                return word;
            }
        }
    }
}

bool valid_yes_no(const std::string& word_to_check) {
    std::string word_check = word_to_check;
    lower(word_check);
    std::vector<std::string> valid_words {"y", "(y)es", "yes", "n", "(n)o", "no"};
    for(auto val_words: valid_words) {
        if(val_words == word_check) {
            return true;
        }
    }
    return false;
}

std::string ask_for_replay() {
    std::string line;
    std::string prompt = "Would you like to replay the game?\n"
                         "Enter (Y)es or (N)o: ";

    while(true) {
        std::cout << prompt;
        std::getline(std::cin, line);
        std::stringstream line2parse(line);
        std::string word;
        line2parse >> word;
        if (line2parse) {
            std:: string what_is_left;
            line2parse >>what_is_left;
            if (not line2parse && valid_yes_no(word)) {
                auto clean_word = clean_string(word);
                return clean_word;
            }
        }
    }
}
