#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//constant variables
const int ADD = 1, VIEW = 2, MARK = 3, DELETE = 4, EXIT = 5;
const int MAX_TASK = 20;

// function prototypes
void ReadInFile(string,string[],int&);
string addlist(string);
void viewlist(string[], int);

int main(){
    cout << "\nTo-do List....\n" << endl;

    int choice;
    string newTask[MAX_TASK];
    int increment;

    string fileName;
    cout << "To which File? ->";
    cin >> fileName;

    // add function here so that line can be read before they wish to add a new task
    ReadInFile(fileName, newTask, increment);


    do{
        cout << "\nOptions: " << "\n";
        cout << "1. Add Task\n" <<
            "2. View Task\n" << 
            "3. Mark Task\n" <<
            "4. Delete Task\n" << 
            "5. Exit\n";
        cout << "-->";
        cin >> choice;

        cout << endl;

        switch(choice){
            case ADD:

            newTask[increment] = addlist(fileName);

            if(increment != MAX_TASK){
                increment++;
            }else{
                cout << "You have reached the max amount of task(per Run)" << endl;
                exit(EXIT_SUCCESS);
            }


            break;


            case VIEW:
            viewlist(newTask, increment); 
            break;

            case EXIT:
            cout << "you have exitted the program" << endl;
            return -1;

            default:
            cout << "Numer inputted is incorrect " << endl;
            break;
        }
    }while(choice != EXIT);
}

void ReadInFile(string fileName, string newTask[], int& increment){
    fstream inFile(fileName, ios::in);

    increment = 0;

    while(inFile >> newTask[increment]){
        increment++;
    }

    inFile.close();
}


string addlist(string fileName){
    fstream outFile;
    outFile.open(fileName, ios::app);
    
    string task;

    if(!outFile){
        cout << "Could not open file" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Whats your Task? - ";
    getline(cin , task);
    outFile << task << endl;

    outFile.close();

    return task;
}

void viewlist(string newTask[], int increment){
    for(int i = 0; i < increment; i++){
        cout << newTask[i]<<endl;
    }
}

