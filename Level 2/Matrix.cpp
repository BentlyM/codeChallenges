#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int COLUMNS = 2;
const int ROWS = 2;

int main(){
    int MATRIX[ROWS][COLUMNS];
    int i = 0;
    int j = 0;
    cout << "Enter the elements of matrix: \n";

    for(i=0; i<ROWS; i++){
        for(j = 0; j<COLUMNS; j++)
        cin >> MATRIX[i][j];
        }

    cout << MATRIX[0][0] * MATRIX[1][0] << endl; // reference
}