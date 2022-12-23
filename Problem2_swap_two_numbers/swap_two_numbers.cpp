// 2.Write a programto accept two numbers. Display the two numbers. Swap the two numbers and display them again.

#include <iostream>

int main()
{
    int num1, num2, temp;
    std::cout << "Enter first number : " << std::endl;
    std::cin >> num1;
    std::cout << "Enter second number : " << std::endl;
    std::cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "Numbers after swapping" << std::endl;
    std::cout << "First number : " << num1 << " and Second Number : " << num2 << std::endl;
}