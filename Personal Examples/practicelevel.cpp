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
    int j = 0;
    do {
        cout << "--> ";
        cin >> num;

        // Check if the current number is equal to the previous one
        if (i > 0 && this->value[i - 1] == num) {
            // Skip adding duplicate, and increment j
            j++;
        } else {
            // Add the non-duplicate number to the vector
            this->value.push_back(num);
            i++;
        }
    } while (num);

    // Print the unique values in the vector
    for (int k = 0; k < this->value.size(); k++) {
        cout << "\n" << this->value[k] << " ";
    }
    return i;
}


private:
    vector<int> value;
};

int main(){
    Number nKey;
    int incerment = 0;
    int totalElements = nKey.insertNum(incerment);
    cout << "\nincerments: " << incerment;

}