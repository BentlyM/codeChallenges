#include <iostream>
#include <cstdlib> 
#include <time.h>
#include <string>
using namespace std;


const string prop[3] = {'rock','paper','scissors'};


int main(){
    int choice = 0;

    do {

        cout << "choose an option\n"
            << "1. Rock \n"
            << "2. Paper \n"
            << "3. Scissors \n"
            << "4. EXIT\n"
            << "--> ";
        cin >> choice;

        switch(choice){
            case 1:
            string rock = "rock";
            playerChoice(rock);
            break;
            case 2:
            string paper = "paper";
            playerChoice(paper);
            break;
            case 3:
            string 
            break;
            case 4:
            cout << "you have stopped the program" << endl;
            break;
            default:
            cout << "\nerror\n" << endl;
    }
    }while(choice != 4);
}