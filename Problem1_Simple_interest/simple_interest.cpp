// 1.Write a programto accept principle, rate of interest and time. Calculate simple interest and display the
#include <iostream>

int main()
{
    float primaryAmount, rateOfInterest, time, simpleInterest;
    std::cout << "Enter the following details :" << std::endl;
    std::cout << "Primary Amount : " << std::endl;
    std::cin >> primaryAmount;
    std::cout << "Rate of Interest : " << std::endl;
    std::cin >> rateOfInterest;
    std::cout << "Time period : " << std::endl;
    std::cin >> time;

    simpleInterest = (primaryAmount * rateOfInterest * time) / 100;
    std::cout << "Simple Interest : " << simpleInterest;
}