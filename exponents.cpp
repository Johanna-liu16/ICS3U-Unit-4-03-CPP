// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringNumber;
    int intNumber;
    float floatNumber;
    int loopCounter = 0;
    int answer = 1;

    // input
    std::cout << "This program calculates exponents." << std::endl;
    std::cout << "Enter a integer: ";
    std::cin >> stringNumber;

    // process and output
    try {
        intNumber = std::stoi(stringNumber);
        floatNumber = std::stof(stringNumber);
        if (intNumber < 0) {
            std::cout << "This is not a positive integer.";
        } else {
            if (floatNumber != intNumber) {
                std::cout << "Invalid Integer";
            } else {
                for (int loopCounter = 0; loopCounter <= intNumber;
                loopCounter++) {
                    answer = loopCounter * loopCounter;
                    std::cout << loopCounter << "² = " << answer << std::endl;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
