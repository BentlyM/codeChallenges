#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits> // Include for numeric_limits
using namespace std;

// Constant variables
const int ADD = 1, VIEW = 2, MARK = 3, DELETE_OPTION = 4, EXIT_OPTION = 5;
const int MAX_TASK = 20;

// Function prototypes
void readInFile(string, string[], int&);
void addTask(string, string[], int&);
void viewTasks(const string[], int);
// Add more function prototypes as needed

int main() {
    cout << "\nTo-do List....\n" << endl;

    int choice;
    string tasks[MAX_TASK];
    int taskCount = 0;

    string fileName;
    cout << "Enter the filename: ";
    cin >> fileName;

    // Read existing tasks from the file
    readInFile(fileName, tasks, taskCount);

    do {
        cout << "\nOptions: \n"
            << "1. Add Task\n"
            << "2. View Tasks\n"
            << "3. Mark Task\n"
            << "4. Delete Task\n"
            << "5. Exit\n";
        cout << "--> ";
        cin >> choice;

        // Handle invalid input
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        switch (choice) {
            case ADD:
                addTask(fileName, tasks, taskCount);
                break;

            case VIEW:
                viewTasks(tasks, taskCount);
                break;

            // Add cases for other options

            case EXIT_OPTION:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != EXIT_OPTION);

    return 0;
}

void readInFile(string fileName, string tasks[], int& taskCount) {
    ifstream inFile(fileName);

    taskCount = 0;

    while (taskCount < MAX_TASK && getline(inFile , tasks[taskCount])) {
        taskCount++;
    }

    inFile.close();
}

void addTask(string fileName, string tasks[], int& taskCount) {
    if (taskCount == MAX_TASK) {
        cout << "You have reached the maximum number of tasks." << endl;
        return;
    }

    ofstream outFile(fileName, ios::app);

    if (!outFile) {
        cout << "Could not open file for writing." << endl;
        return;
    }

    cin.ignore(); // Clear the newline character from the buffer

    cout << "Enter your task: ";
    getline(cin, tasks[taskCount]);

    outFile << tasks[taskCount] << endl;
    taskCount++;

    outFile.close();

    cout << "Task added successfully." << endl;
}

void viewTasks(const string tasks[], int taskCount) {
    if (taskCount == 0) {
        cout << "No tasks available." << endl;
        return;
    }

    cout << "Tasks:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}