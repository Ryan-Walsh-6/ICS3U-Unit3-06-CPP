// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 7 2020
// this program checks to see if the number guessed is the magic number

#include <iostream>
#include <random>
#include <string>

int main() {
    // this program checks to see if the number guessed is the magic number
    std::string guessed_number_string;
    int random_number;
    int guessed_number;

    // input
    std::cout << "Enter a number(between 0-9)):";
    std::cin >> guessed_number_string;
    std::cout << "" << std::endl;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  //  mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  //  [0,9]
    random_number = idist(rgen);


    // process and output
    try {
        guessed_number = std::stoi(guessed_number_string);
        if (guessed_number == random_number) {
            std::cout << "Congratulations! You guessed the right number!";
    }   else {
            std::cout << "Not the correct number. Try again";
            std::cout << "" << std::endl;
            std::cout << "The correct number was:"
                      << random_number << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not a number. Please try again.";
    }
}
