#include <iostream>
using namespace std;

int reverseDigits(int num)
{
    int rev_number = 0;
    while(num > 0){
        rev_number = rev_number * 10 + num % 10;
        num = num / 10;
    }
    return rev_number;
}

int main(){
    int number;

    cout << "numberReversal..." << endl;
    cout << "-----------------" << endl;

    cout << "\nNumber -> ";
    cin >> number;

    cout << "Reverse of num is: " << reverseDigits(number);


}