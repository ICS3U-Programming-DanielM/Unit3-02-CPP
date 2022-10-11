// Copyright (c) 2022. Daniel Momoh HS All rights reserved.
// Created by : Daniel Momoh
// Created on : Oct 2022
// This program picks a random number and you have to guess
#include <iostream>

int main() {
// this function allows user a random number
const int random_number = 5;
int numberGuessed;

// input number from user
std::cout << "Guess the number from 1-10: ";
std::cin >> numberGuessed;
std::cout << "" << std::endl;

// Check to see if input is correct or wrong
if (numberGuessed == random_number) {
// display output
std::cout << "YOU GOT IT RIGHT!";
} else {
std::cout << "You got it wrong.";
}
}
