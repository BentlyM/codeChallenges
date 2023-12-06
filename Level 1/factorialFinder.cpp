#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number, factorial = 1;

    cout << "\nFactorial Finder...." << endl;
    cout << "----------------------" << endl;
    cout << "Number -> ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        factorial *= i;
    }    

    cout << "the factorial of number is: " << factorial << endl;



}