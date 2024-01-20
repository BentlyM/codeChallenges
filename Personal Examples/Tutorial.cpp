/*"DO NOT CHANGE FILE"*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout << "\nSimple Interest Calculator..." << endl;

    int principal;
    cout << "\nEnter principal amount: ";
    cin >> principal;

    double interest;
    cout << "Enter interest rate (in percentage): ";
    cin >> interest;
    interest /= 10; // converted to percentage here

    int time;
    cout << "Enter Time (in years): ";
    cin >> time;

    double simpInterest;
    simpInterest = (principal * interest * time) /10 ; // 10 instead of 100 because it was converted

    cout << "\n Simple interest: " << simpInterest << endl;
    cout << "Interest Rate: " << interest << endl;



}