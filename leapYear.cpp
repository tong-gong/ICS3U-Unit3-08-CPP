// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a leap year program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function to get leap year.

  int userInput;
  std::string userInputAsString;

  // input
  std::cout << "Enter a year" << std::endl;
  std::cin >> userInputAsString;
  std::cout << "" << std::endl;

  // process + output
  try {
     userInput = std::stoi(userInputAsString);
     if (userInput % 4 != 0) {
      std::cout << userInput << "is a common year" << std::ends;
     } else {
        if (userInput % 100 != 0) {
            std::cout << userInput << "is a leap year" << std::ends;
        } else {
            if (userInput % 400 != 0) {
                std::cout << userInput << "is a common year" << std::ends;
            } else {
                std::cout << userInput << "is a leap year" << std::ends;
            }
        }
    }
  } catch (std::invalid_argument) {
    std::cout << "You are not type in correctly!!!" << std::ends;
  }
}

