#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;


struct text{
    string data;
};

void reversal(string, text&);

int main(){
    string myFile;
    text Key;
    cout << "File Line Reversal ..." << endl;

    cout << "Enter File Name...\n---> ";
    cin >> myFile;

        reversal(myFile, Key);

}

void reversal(string myFile, struct text& Key){
    fstream inFIle(myFile, ios::in);
    if(!inFIle){
        cerr<<"\nError: Unable to open file\n";
        exit(EXIT_FAILURE);
        }
    else {
        while (getline (inFIle, Key.data)){
            reverse(Key.data.begin(), Key.data.end());
            cout << Key.data << endl;
                }
            }
    inFIle.close();
}
