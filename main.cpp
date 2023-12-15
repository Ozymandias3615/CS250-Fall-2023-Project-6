// Author: Nanabanyin Abbiw
// Date: Dec 14, 2023
// Description: This program determines if a word is a palindrome or not

#include <iostream>
#include <string>

using namespace std;

bool Palindrome(string str, int start, int end)
{
    if (start = end){
        return true;
    }

    if (str[start] != str[end]){
        return false;
    }

    return Palindrome(str, start + 1, end - 1);
}

int main()
{
    string input;

    cout << "Enter a word: ";
    cin >> input;

    if (Palindrome(input, 0, input.length() - 1))
    {
        cout << "The word is a palindrome." << endl;
    }

    else
    {
        cout << "The word is not a palindrome." << endl;
    }

}
