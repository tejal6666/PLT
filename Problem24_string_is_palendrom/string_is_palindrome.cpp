// 24. Write a program to check if the string is a palindrome

#include <iostream>
#include <string>
using namespace std;

string Palindrome(std::string word)
{
    string revWord = word;
    reverse(revWord.begin(), revWord.end());

    if (revWord == word)
    {
        return "String is Palindrome.";
    }
    else
    {
        return "String is not a palindrome";
    }
}

int main()
{
    string word;

    cout << "Enter a String : ";
    cin >> word;
    cout << Palindrome(word);
}