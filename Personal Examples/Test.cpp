#include <iostream>
using namespace std;

int main(void) {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 != 0){
        cout << num << " is an odd number." << endl;
    }else{
        cout << "this number is even i need odd  numbers";
        exit(EXIT_SUCCESS);
    }
}