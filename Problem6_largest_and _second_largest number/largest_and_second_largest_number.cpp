// 6.Write a programto find the largest and second largest of 3 numbers

#include <iostream>

int main()
{

    int num1, num2, num3, largestNumber, secondLargest;
    std::cout << "Enter the following details" << std::endl;
    std::cout << "First Number :";
    std::cin >> num1;
    std::cout << "Second Number :";
    std::cin >> num2;
    std::cout << "Third Number :";
    std::cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        largestNumber = num1;
        if (num2 > num3)
        {
            secondLargest = num2;
        }
        else
        {
            secondLargest = num3;
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        largestNumber = num2;
        if (num1 > num3)
        {
            secondLargest = num1;
        }
        else
        {
            secondLargest = num3;
        }
    }
    else
    {
        largestNumber = num3;
        if (num1 > num2)
        {
            secondLargest = num1;
        }
        else
        {
            secondLargest = num2;
        }
    }

    std::cout << "largest" << largestNumber << std::endl;
    std::cout << "secondlargest" << secondLargest << std::endl;

    return 0;
}