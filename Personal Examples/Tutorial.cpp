/*"DO NOT CHANGE FILE"*/
#include <iostream>
using namespace std;

// ternary operator
int main(){
    int x;
    string result;
    cout << "Enter a number: ";
    cin >> x;
    // using if else statement

    result = (x % 2 == 0) ? "even" : "odd";

    cout << result;
    exit(EXIT_SUCCESS);
}