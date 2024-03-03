#include <iostream>
using namespace std;

int main(){
    int myArr[] = {1,1,1,2,2,3,3,3,4,4,4,4,5,5,5};

    int j = 1;

    for(int i = 0; i < sizeof(myArr)/sizeof(myArr[0]); i++){
        if(myArr[i] != myArr[i - 1]){
            myArr[j] = myArr[i];
            j++;
            cout << myArr[i] << endl;
        }
    }

    cout << "The size of this array is " << sizeof(myArr)/sizeof(myArr[0]) << "\n";
    cout << "Number of repeative values is " << j;
} 