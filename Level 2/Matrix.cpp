#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int COLUMNS = 2;
const int ROWS = 2;

int main(){
    int MATRIX[ROWS][COLUMNS];
    cout << "Enter the elements of matrix: \n";
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++)
        cin >> MATRIX[i][j];
        }

}