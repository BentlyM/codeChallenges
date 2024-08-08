#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

class Number {
public:
    Number() {
        cout << "Coding interview...\n";
    }

    int insertNum(int& i) {
    int num;
    do {
        cout << "--> ";
        cin >> num;

        // Check if the current number is equal to the previous one
        if (i > 0 && this->value[i - 1] == num) {
            // Skip adding duplicate
            continue;
        } else {
            // Add the non-duplicate number to the vector
            this->value.push_back(num);
            i++;
        }
    } while (num);

    // Print the unique values in the vector
    cout << "unique values:";
    for (int k = 0; k < this->value.size(); k++) {
        cout << "\n" << this->value[k] << " ";
    }
    return i;
}

    int removeNum(int& i){
        int rAmount = 0; // r - remove
        cout << "\nHow many Values do you wish to remove: ";
        cin >> rAmount;

        for(int index = 0; index < rAmount; ++index){
            int elemPosition; // elem - element
            cout << "\nremove value from class [0-" << i - 1 << "]:";
            cin >> elemPosition;
            if(elemPosition >= 0 && elemPosition < i){
                for(int mark = elemPosition; mark < i - 1; ++mark){
                    ;
                }
                i--;
            }else{
                cout << "Invalid position. Please enter a valid position.\n";
                --index;
            }
        }
        
        return i;
        
    }

    int randomNum(int amount){
        srand(time(NULL));
        cout << "Random Value: " << this->value[rand()%amount] << endl;
    }


private:
    vector<int> value;
};

int main(){
    Number nKey;
    int incerment = 0;
    int totalElements = nKey.insertNum(incerment);
    cout << "\nincerments: " << incerment;

    nKey.removeNum(incerment);

    nKey.randomNum(incerment);

}