#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    fstream inFile("listScrape", ios::in);
    string sentence;
    vector<string> prints;

    while(getline(inFile, sentence))
    {
        prints.push_back(sentence);
        sentence = " ";
    }

    for(int j = 0; j < prints.size(); j++)
        cout << prints[j] << "\n";

    inFile.close();
}