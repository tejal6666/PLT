// 9. Write a program to find the sum of all odd numbers from 1 to N.Accept N.Display the sum.

#include <iostream>

int main()
{
    int i, N, sum = 0;

    std::cout << "Enter a Number : ";
    std::cin >> N;

    for (i = 1; i <= N; i++)
    {

        if (i % 2 == 1)
        {

            sum += i;
        }
    }
    std::cout << "Sum of odd numbers is " << sum;
}