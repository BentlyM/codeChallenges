#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

class Number{
    public:
    Number(){
        cout << "Coding interview...\n";
    }

    int insertNum(int& i){
        int num;
        int j = 0;
        do{
            cout << "--> ";
            cin >> num;
            value.push_back(num);
            i++;
            if(value[j] == value[i - 1]){
                value[i] = value[j];
                j++;
            }
        }while(num);

        for(i = 1; i < value.size(); i++){
            cout << "\n" << value[i - 1] << " ";
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