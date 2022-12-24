// 4.Write a programto accept a double value.Separate the whole value from the fractional value and store them in two variables.Display the same.

#include <iostream>
using namespace std;
int main()
{
    char num;
    cout << "Enter a number : ";
    cin >> num;

    switch (num)
    {
    case '0':
        cout << "Zero";
        break;
    case '1':
        cout << "One";
        break;
    case '2':
        cout << "Two";
        break;
    case '3':
        cout << "Three";
        break;
    case '4':
        cout << "Four";
        break;
    case '5':
        cout << "Five";
        break;
    case '6':
        cout << "Six";
        break;
    case '7':
        cout << "Seven";
        break;
    case '8':
        cout << "Eight";
        break;
    case '9':
        cout << "Nine";
        break;
    }
    return 0;
}