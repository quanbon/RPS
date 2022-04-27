//
// Created by Quan Nguyen on 4/24/22.
//

#include <random>

//Code from Lecture

int get_random_int(std::minstd_rand& generator) {
    std::uniform_int_distribution<int> dist(0, 3);
    int random_num = dist(generator);
    return random_num;
}