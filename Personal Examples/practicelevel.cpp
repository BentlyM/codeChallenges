#include <iostream>
 using namespace std;

// function prototypes
void insertEnd(int[], int, int, int);
void removeMiddle(int[],int,int);

 int main(){
    const int length = 3; // constant length
    int i = 0; // incermenting number
    int n = 0; // capacity number
    int tempNum; // temporary number
    int myArray[length] = {5,6,7};

    // insertEnd(myArray, i , length, tempNum);
        
    // removeMiddle(myArray, i , length);
    

    
    tempNum = sizeof(myArray)/sizeof(myArray[0]);
    cout << "\nthe Length: " << tempNum << endl;
 }

 void insertEnd(int myArr[], int i, int length, int tempNum){
    if(length > 0){
        myArr[length - 1] = 0;

        for(i = 0; i < length; i++){
            cout << myArr[i] << " ";
        }
    }
 }

 void removeMiddle(int myArr[], int i, int length){
    for (int index = i + 1; index < length; index++){
         myArr[index - 1] = myArr[index];
         cout << myArr[index] << " ";
    }
 }