#include <iostream>
#include <string>
using namespace std;

int main(){
    string Word;
    int v = 0;
    int c = 0;
    char vowels[] = {'A','E','I','O','U','Y'};
    cout << "\ncharacterCount..." << endl;
    cout << "-----------------" << endl;
    cout << "Give me a Word -> ";
    cin >> Word;
    cout << endl;

        
    for(int i = 0; i < Word.length(); i++){
    Word[i] = toupper(Word[i]);

    if(Word[i] == 'A' || Word[i] == 'E' || Word[i] == 'I' || Word[i] == 'O' || Word[i] == 'U'){
        v++;
    }else{
        c++;
    }
    }



    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
    cout << "Word Output " << Word << endl;
    

}