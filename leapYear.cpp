// Copyright 2025 Xiaohan. All rights reserved.
// Created by Xiaohan
// Created on Apr 2, 2025
// This program is to determine wether the year is a leap year or not.

#include <iostream>
#include <string>

int main() {
    // Declare a string variable to store the user's input.
    std::string yearAsString;
    // Declare an integer variable to store the converted year.
    int yearAsInt;
    // Prompt the user to enter a year.
    std::cout << "Please enter a year: ";
    // Casting the user's input as a string.
    std::cin >> yearAsString;

    try {
        // Try casting it in string.
        yearAsInt = std::stoi(yearAsString);
        // Calculate the year and try divide it by 4.
        if (yearAsInt % 4 == 0) {
            if (yearAsInt % 100 == 0) {
                // If so, see if the year is divisible by 100.
                if (yearAsInt % 400 == 0) {
                    // If so, see if the year is divisible by 400.
                    std::cout << yearAsInt << " is a leap year!";
                } else {
                    // If is not divisible, display the output that it is not a leap year
                    std::cout << yearAsInt << " is not a leap year";
                }
            } else {
                // If not divisible by 100, display that the year is a leap year
                std::cout << yearAsInt << " is a leap year!";
            }
        } else {
            // If the year is not divisible by 4, display the output that is not a leap year
            std::cout << yearAsInt << " is not a leap year.";
        }
    } catch (std::invalid_argument const &e) {
        // Exceptions where enter an invalid input
        std::cout << "Incorrect input, enter an integer." << std ::endl;
    }
}
