#include <iostream>

int main()
{
    int X, N, powerValue, i;
    std::cout << "Enter a number : ";
    std::cin >> X;
    std::cout << "Enter power of : ";
    std::cin >> N;
    powerValue = 1;
    for (i = 0; i < N; i++)
    {
        powerValue = powerValue * X;
    }
    std::cout << X << "^" << N << " is " << powerValue;
}