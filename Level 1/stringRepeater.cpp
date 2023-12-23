#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_REPEATS = 10;


int main(){
    string word;
    int repeats;
    cout << "\n|String Repeater|" << endl;
    cout << "-----------------" << endl;
    // Get the input from user.
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter the number of times to repeat: ";
    cin >> repeats;
    if(repeats < MAX_REPEATS){
        for(int i = 0; i < repeats; i++)
        cout << word;
    }else{
        cout << "\nThat is to many Repeats!!";
    }
}