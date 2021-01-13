// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for arrarys

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int mini_number(std::array<int, N> my_numbers) {
    // This function is for calculate

    int basic_number = 10;

    // process
    for (int loop_number : my_numbers) {
        if (loop_number < basic_number) {
            basic_number = loop_number;
        }
    } return basic_number;
}


int main() {
    // This function is for arrarys

    std::array<int, 10> my_numbers;
    int some_variable;
    int loop_number;
    int smallest_number;

    // process
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 10);  // [0,100]
        some_variable = idist(rgen);
        my_numbers[loop_number] = some_variable;
    }
    // call function
    smallest_number = mini_number(my_numbers);
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::cout << "The number is: " << my_numbers[loop_number] << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << smallest_number;
}
