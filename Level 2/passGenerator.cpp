#include <iostream> // input output
#include <string> // string variables
#include <ctime> // set time
#include <cstdlib> // srand and rand 

using namespace std;

// Display
const int GENERATE_PASSWORD = 1;
const int DISPLAY_PASSWORDS = 2;
const int EXIT = 3;
// MAXIMUM constants
const int MAX_PASSWORDS = 5;
const int MAX_LENGTH = 20;

// variable prototypes
void displayPasswords(string, string);
string genPassword(int);

int main(){
    int numPass = 0; // amount of passwords
    string password = ""; // the given password
    string passwords = ""; // all given passwords (all stored in one variable)
    int choice; // ur choice

    do{
        cout << "\nChoose an option:\n";
        cout << GENERATE_PASSWORD << ". Generate Password\n";
        cout << DISPLAY_PASSWORDS << ". Display Passwords\n";
        cout << EXIT << ". Exit Program\n";
        cout << "-->";
        cin >> choice; // prompts choice

        switch(choice){
            case GENERATE_PASSWORD:
            if(numPass != MAX_PASSWORDS){
                password = genPassword(password.length());
                passwords += password + "\n"; // adds password to passwords
                ++numPass;
            }else{
                cout << "\nYou have reached the maximum number of passwords.\n";
            }
                break;
            case DISPLAY_PASSWORDS:
                displayPasswords(password, passwords); // display passwords
                break;
            case EXIT:
                cout << "You have chosen to exit the program. \n";
                break;
            default:
                cout << "Incorrect Input...\n" << endl;
        }
    }while(choice != EXIT);

    return 0;
}
void displayPasswords(string pass, string passwords){
    cout << "\nPassword: " << pass << endl;
    cout << "Saved Passwords:\n" << passwords << endl;
}

string genPassword(int length){
    string password = "";
    int attempts = 0;
    srand(time(0));

    while(attempts < 3){
        cout << "What is the length of the password: ";
        cin >> length;

        if(length <= MAX_LENGTH){
            for(int i = 0; i < length; i++){
                int randomChar = rand() % 95 + 32;
                password += char(randomChar);
            }
            cout << "\nPassword Generated Successfully." << "\n";
            return password;
        }else if(length >= MAX_LENGTH){
            cout << "The password has reached its max length." << endl;
            attempts++;
            cout << "attempts: " <<  attempts << "\n";
        }
    }

    if(attempts > 3){
        cout << "You have reached the max amount of attempts";
        exit(EXIT_FAILURE);
    }

    return password;
}