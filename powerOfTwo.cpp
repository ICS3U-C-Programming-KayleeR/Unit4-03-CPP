// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 01,11,2026
// This program raises positive whole
// numbers to the poer of 2 using a for loop

#include <iostream>
#include <string>
#include <ostream>
#include <cmath>

int main() {
    // declare variables
    int userInt, counter, power2;
    float userFloat;
    std::string userNum;

    // get user's number
    std::cout <<"Enter a positive whole number: ";
    std::cin >> userNum;
    std::cout <<std::endl;

    // check if user input is an integer
    try {
        userInt = std::stoi(userNum);
        userFloat = std::stof(userNum);

        if (userInt == userFloat) {
            if (userInt < 0) {
                std::cout <<"Integer inputs must be positive\n";
            } else {
                for (counter = 0; counter <= userInt; counter++) {
                    power2 = std::pow(counter, 2);
                    std::cout <<counter <<" to the power of 2 is " <<power2;
                std::cout <<std::endl;
                }
                std::cout <<std::endl;
            }
        } else {
            std::cout <<"Number inputs must be whole numbers\n";
        }
    } catch (std::invalid_argument) {
        std::cout <<userNum <<" is not a positive whole number\n";
    }
    std::cout <<"Thank you for playing!\n";
}
