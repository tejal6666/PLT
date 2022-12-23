#include <iostream>
#include <string>

void PrintValue(char digit)
{
    switch (digit)
    {
    case '0':
        std::cout << "Zero ";
        break;
    case '1':
        std::cout << "One ";
        break;
    case '2':
        std::cout << "Two ";
        break;
    case '3':
        std::cout << "Three ";
        break;
    case '4':
        std::cout << "Four ";
        break;
    case '5':
        std::cout << "Five ";
        break;
    case '6':
        std::cout << "Six ";
        break;
    case '7':
        std::cout << "Seven ";
        break;
    case '8':
        std::cout << "Eight ";
        break;
    case '9':
        std::cout << "Nine ";
        break;
    }
}

void PrintWord(std::string N)
{
    int i;
    int length = N.length();

    for (i = 0; i < length; i++)
    {
        PrintValue(N[i]);
    }
}

int main()
{
    std::string N;
    std::cout << "Enter NUmber : ";
    std::cin >> N;
    PrintWord(N);
    return 0;
}
