// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: Feb 28, 2022
/* 
 This is a program that calculates the area and perimeter of a rectangle based on user's input.
*/

#include <iostream>

int main() {
    int length;
    std::cout << "Input a length: \n";
    std::cin >> length;
    int width;
    std::cout << "Input a width: \n";
    std::cin >> width;
    std::cout << "The area is " << length*width << "cm^2\n";
    std::cout << "The perimeter is " << 2*(length+width) << "cm\n";
}
