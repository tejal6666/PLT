// 4.Write a programto accept a double value.Separate the whole value from the fractional value and store them in two variables.Display the same.

#include <iostream>

int main()
{
    double number, fractionalValue;
    int wholeValue;
    std::cout << "Enter a double value :" << std::endl;
    std::cin >> number;

    wholeValue = int(number);
    fractionalValue = number - wholeValue;
    std::cout << "whole value :" << wholeValue << std::endl;
    std::cout << "Fractional value :" << fractionalValue << std::endl;

    return 0;
}