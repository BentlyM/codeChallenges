// Headers
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// constants
const int COLUMNS = 2;
const int ROWS = 2;

// Prototypes
int multiMaxtrix(int[ROWS][COLUMNS]);

int main(){
    int MATRIX[ROWS][COLUMNS];
    int i = 0;
    int j = 0;
    int index = 0;
    cout << "Enter the elements of matrix: \n";

    for(i=0; i<ROWS; i++){
        cout << "Row " << index + 1 << ":" << endl;
        index++;
        for(j = 0; j<COLUMNS; j++){
            cin >> MATRIX[i][j];
        }
    }

    multiMaxtrix(MATRIX);

}

int multiMaxtrix(int MATX[ROWS][COLUMNS]){
    int i;
    int j = 0;

    for(i = 0; i < ROWS; i++){
        cout << MATX[i][j] * MATX[i][j] << endl; // reference
        ++j;
    }
}

