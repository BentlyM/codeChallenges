#include <iostream>
#include <iomanip>
#include <fstream> 
#include <string>
using namespace std;

struct classExam{
    int students;
    string results; // this is honeslty only for me to grab the second line lmao
};

const int STUDENT_CAPACITY = 25;

void readInFile(classExam[] , int&);
void displayStudents(int);

int main(){
    const int STUDENTS = 1, AVG_SCORE = 2, QUIT = 3;
    classExam scores[STUDENT_CAPACITY];
    classExam result1 , result2; 
    fstream inFile("results", ios::in); // making my life as hard as possible
    int numStudents = 0;
    int i = 0;
    double avgScore = 0;
    int choice;

    cout << "\nFinal EXAM scores..." << endl;
    readInFile(scores, numStudents);

    do{
        cout << "1. View number of students in course\n"
            << "2. The average score in the final exam\n"
            << "3. Exit\n" << "--> ";
        cin >> choice;

    switch(choice){
        case STUDENTS:
        displayStudents(numStudents);
        break;
        case AVG_SCORE:

        while(getline(inFile, result1.results)){
            getline(inFile, result2.results); // def a easier way to do this but i thought outside the box at least
        }

        cout << "\n" << result2.results << ": " << avgScore << "\n" << endl;

        break;
        case QUIT:
        return -1;
        break;
        default:
        cout << "\nWrong input :D\n";
        
    }

    }while(choice != QUIT);

}

void readInFile(classExam scores[] , int &numStudents){
    fstream inFile("scores", ios::in);
    if(!inFile){
        cout << "File not found\n";
        return;
    }

    int i = 0;

    numStudents = 0;
    while(inFile >> scores[i].students){
        numStudents++;
    };

    inFile.close();
}

void displayStudents(int numStudents){
    string resultStudents;
    fstream inFile("results", ios::in);
    if(!inFile){
        cout << "File not found\n";
        return;
    }

    getline(inFile, resultStudents);

    cout << "\n" << resultStudents << ": " << numStudents << "\n" << endl;

    inFile.close();
}
