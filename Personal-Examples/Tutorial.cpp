/*"DO NOT CHANGE FILE"*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

/*Current Project Automated ToolBox Inventory System*/
/*
    -- Implement a toolbox inventory(remove,add,display) --incompelete
    -- Implement categorization of toolbox(cutting,measuring,fastening) -- incompelete
    -- Search functionality (find specific tools) --incomplete
    -- languge model which describes necessary tools require for construct a specific item -- incomplete
    -- simple user interface(display options) -- incomplete
    -- Implement nesscary files I/O for required data -- incomplete
    -- clear eror messages and guide user on correct usage -- incomplete
    -- clear documentation -- progress

*/

struct toolBox{
    string tool;
};

//constants
const int ADD = 1, REMOVE = 2, SEARCH = 3, TOOL = 4, CHECK = 5, EXIT = 6;
const int MAX_CATEGORY = 7;
const int MAX_TOOL = 6;
const string CATEGORIES[MAX_CATEGORY] = {"Cutting","Measuring","Fastening","Marking","Finishing","Gripping","Safety"};

//variable prototypes
string addTool(toolBox);
string readInFile();


int main(){
    int choice;
    toolBox tAcquire;

    do{
    cout << "\nToolBox..." << "\n";
    cout << "1. Add Tool\n"
        << "2. Remove Tool\n"
        << "3. Search Tool\n"
        << "4. Display Toolbox Inventory\n"
        << "5. Display Construction Item Checklist\n"
        << "6. Exit\n"
        << "---> ";
    cin >> choice;

    cout << "\n";

    if (cin.fail()) {
            cout << "\nInvalid input. Please enter a number." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(); // Discard invalid input
            continue;
    }

    readInFile();

    switch(choice){
        case ADD:
        addTool(tAcquire);
        break;
        case REMOVE:
        ;
        break;
        case SEARCH:
        ;
        break;
        case TOOL:
        ;
        break;
        case CHECK:
        ;
        break;
        case EXIT:
        exit(EXIT_SUCCESS);
        default:
        cerr << "Error: Misinput" << "\n";
    }

    }while(choice != 6);

    inFile.close();
}

// read tools already in file
string readInFile(){

}

// add tools
string addTool(toolBox tAcquire){
    
}