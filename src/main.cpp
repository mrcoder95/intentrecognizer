/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Program to classify the intent of the message provided by the user.
  *  C++ Standard:   17
  **/
#include <intent_recognizer.h>
#include <iostream>

int main() {
    intent_recognizer* handle = new intent_recognizer();
    std::string userInput {""};
    std::cout << "Enter the Message = ";
    std::getline(std::cin >> std::ws, userInput);
    std::cout << "Intent = " << handle->identifyIntent(userInput) << std::endl;
    delete handle;
    return 0;
}
