#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//variable prototypes
void addTask(string[], int&);
void viewTask(string[] , int);
void deleteTask(string[], int&);
void markTask(string[], int);
// global constants
const int MAX_TASKED = 10;

// menu
void taskMenu(){
    cout << "1. Add Task\n" << "2. View Tasks\n" 
    << "3. Mark Tasks\n" << "4. Delete Task\n" << "5. Quit." << endl;
    cout << "--> ";
}

int main()
{
    std::string Task[MAX_TASKED];
    int numTask = 0;
    int choice;
    const int ADD = 1, VIEW = 2, MARK = 3, DELETE = 4, QUIT = 5;


    cout << "\t" << "Simple To-Do List..." << "\n";
    cout << "\t" << "--------------------\n" << "\n";

    do{
    taskMenu();
    cin >> choice;
    if(choice < 1 || choice > 5 ){
        cout << "Invalid input! Please enter a number between 1 and 5.\n";
    }else{
        switch(choice){
        case ADD:
        addTask(Task, numTask);
        break;
        case VIEW:
        viewTask(Task, numTask);
        break;
        case MARK:
        markTask(Task, numTask);
        break;
        case DELETE:
        deleteTask(Task, numTask);
        break;
        default:
        //do nothing
        ;
    }
    }

    }while(choice != QUIT);


}

void addTask(string Task[], int& numTask)
{
    if(numTask == MAX_TASKED)
    {
        printf("\nYou have reached the max amount of task!\n\n");
    }else{
        std::cout << "\nEnter Task: " << std::endl;
        std::cin.ignore();
        std::getline(std::cin ,Task[numTask]);
        numTask++;
        std::cout << "Task Entered!\n\n";

    }
}

void viewTask(string Task[], int numTask){
    if(numTask == 0){
        printf("\nYou dont have any task\n\n");
    }else{
        std::cout << "\n======= Your Tasks =======\n";
        for (int i = 0; i < numTask; i++) {
            std::cout << i + 1 << ". " << Task[i] << "\n";
        }
        std::cout << "==========================\n\n";
    }
}

void deleteTask(string Task[], int& numTask) {
    if (numTask == 0) {
        cout << "\nYou don't have any tasks to delete\n\n";
        return;
    }

    int taskIndex;
    viewTask(Task, numTask); // Display tasks before deletion

    cout << "Enter the task number to delete: ";
    cin >> taskIndex;

    if (taskIndex >= 1 && taskIndex <= numTask) {
        // Shift tasks to fill the deleted task's position
        for (int i = taskIndex - 1; i < numTask - 1; i++) {
            Task[i] = Task[i + 1];
        }
        numTask--;
        cout << "\nTask deleted!\n\n";
    } else {
        cout << "Invalid task number!\n\n";
    }
}

void markTask(string Task[], int numTask) {
    if (numTask == 0) {
        cout << "\nYou don't have any tasks to mark\n\n";
        return;
    }

    int taskIndex;
    viewTask(Task, numTask); // Display tasks before marking

    cout << "Enter the task number to mark as completed: ";
    cin >> taskIndex;

    if (taskIndex >= 1 && taskIndex <= numTask) {
        // Add a marker or modify the task to indicate completion
        // For example, you can prepend "[Completed]" to the task
        Task[taskIndex - 1] = "[Completed] " + Task[taskIndex - 1];
        cout << "Task marked as completed!\n\n";
    } else {
        cout << "Invalid task number!\n\n";
    }
}
