#include <iostream>
using namespace std;

struct Tx{
    double expenses = 0;
};

const int MAX_TX = 10;

int main(){
    Tx purch[MAX_TX];
    double positiveSum = 0 , negativeSum = 0;

    cout << "Enter your daily transactions (amount positive for income, negative for expenses; press enter to finish):" << "\n";
    
}