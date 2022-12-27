// Write as many programs to generate the following series.In all the following cases, accept N :
//  a.4, 16, 36, 64, … N                                                                                              b.1,2, 3, 4, 5, 6, … N
//                        c.1,
//     4, 27, 256, 3125, … N
//                           d.1,
//     4, 7, 12, 23, 42, 77, … N
//                               e.1,
//     4, 9, 25, 36, 49, 81, 100, … N
//                                    f.1,
//     5, 13, 29, 49, 77, … N

#include <iostream>
using namespace std;

void printSeriesA(int n)
{
    int i, s;

    s = 1;
    i = 0;
    while (i < n)
    {
        s += i * i;
        cout << s << " ";
        i++;
    }
}

void printSeriesB(int n)
{
    int f1 = 0, f2 = 1, i;

    cout << f1 << " ";
    for (i = 1; i < n; i++)
    {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main()
{
    char letter;
    int i, n;
    cout << "a .4, 16, 36, 64, … N " << endl;
    cout << "b .1,2,3, 4, 5, 6, … N " << endl;
    cout << "c .1,4,27, 256, 3125, … N " << endl;
    cout << "d .1,4, 7, 12, 23, 42, 77, … N" << endl;
    cout << "e .1,4,9, 25, 36, 49, 81, 100, … N " << endl;
    cout << "f .1,5,13, 29, 49, 77, … N " << endl;
    cout << "Choose a sequence from a-f : ";
    cin >> letter;
    cout << "Enter value of N : ";
    cin >> n;

    switch (letter)
    {
    case 'a':
        printSeriesA(n);
        break;
    case 'b':
        printSeriesB(n);
        break;

    default:
        cout << "INVALID INPUT";
        break;
    }

    return 0;
}