#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX_NUMBERS = 10;

int main(){

    vector<int> numbers;
    int value;
    int count = 1;
    double avg = 0;

    cout << "\nAverage of Postitive Numbers..." << endl;
    cout << "\nEnter a list of numbers (seperated by spaces): ";

     do{
        cin >> value;
        if(value > 0){
            numbers.push_back(value);
            count++;
        }else{
            ;
        }
     }while(count != MAX_NUMBERS);

}