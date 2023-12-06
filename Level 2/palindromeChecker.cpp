#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    // Compare the original string with the reversed string
    if (str == string(str.rbegin(), str.rend())) {
        return true;
    }
    return false;
}

int main()
{
    string input;

    cout << "Please enter a string: ";
    cin >> input;

    // Call the isPalindrome function to check if the input string is a palindrome
    if (isPalindrome(input)) {
        cout << input << " is a palindrome";
    } else {
        cout << input << " is not a palindrome";
    }

    return 0;
}