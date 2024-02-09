#include <iostream>
using namespace std;

int main(){
    int bucky;
    cout << "Enter a number: ";
    cin >> bucky;

    bucky = (1 > 3) ? 10  : printf("Hello World!") + 5; // ternary operator
    
    if(bucky == 1){
        cout << "You entered 1." << endl;
    }else{
        cout << "You didn't enter 1. You entered " << bucky << " instead!" << endl;
    }

    return 0;
}