// 4.Write a programto accept a double value.Separate the whole value from the fractional value and store them in two variables.Display the same.

#include <iostream>

int main()
{
    double number, fractionalValue;
    int wholeValue;
    std::cout << "Enter a double value :" << std::endl;
    std::cin >> number;

    fractionalValue = number % 1;
    wholeValue = number - fractionalValue;
    std::cout << "original value :" << number << std::endl;
    std::cout << "whole value :" << wholeValue << std::endl;
    std::cout << "Fractional value :" << fractionalValue << std::endl;

    return 0;
}