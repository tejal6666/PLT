// 3.Write a programto accept a number and display whether it is an even or odd number

#include <iostream>

int main()
{

    int num;
    std::cout << "Enter a Number :" << std::endl;
    std::cin >> num;
    if (num % 2 == 0)
    {
        std::cout << "Number is Even." << std::endl;
    }
    else
    {
        std::cout << "Number is Odd." << std::endl;
    }
    return 0;
}