#include <iostream>
using namespace std;

int main(){
    cout << "Even or Odd Checker...\n" << endl;

    int number;
    cout << "Enter a  number: ";
    cin >> number;

    if(number % 2 != 0){
        cout << number << " is an odd number";
    }else{
        exit(EXIT_FAILURE);
    }
}