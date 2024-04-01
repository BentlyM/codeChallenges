#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const int number = 2;

int main(){
    int i = 0;
    string sentence;
    fstream outfile("listScrape" , ios::app);
    vector<string> mySentence;
    cout << "Inputs(max value[" << number << "]): " << "\n";
    while(i != number){
        getline(cin , sentence);
        mySentence.push_back(sentence);
        sentence = " ";
        i++;
    }
    cout << "Outputs: " << endl;
    for(int j = 0; j < number; j++){
        cout << j + 1 << ". " << mySentence[j] << "\n";
    }

    outfile.close();
}