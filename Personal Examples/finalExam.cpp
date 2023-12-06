#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct Inventory{
    string itemNumber;
    string itemName;
    int itemCount;
    double itemPrice;
};

const int SIZE = 50;

Inventory getItem();
void readInData(Inventory[], int&);
void createReport(Inventory[], int);
void addItemToFile(const Inventory&);
double totalCost(Inventory[], int);

int main(){
    const int ADD = 1, LIST = 2, CALC = 3, QUIT = 4;
    Inventory myInventory[SIZE];
    Inventory newItem;
    int size;
    double total;
    int choice;

    cout << "\nBackToSchool Shop...\n" << endl;    

    readInData(myInventory, size);

    do{
        cout << "1. Add new item to inventory.\n"
            << "2. List inventory items.\n"
            << "3. Calculate total cost of items in the inventory.\n"
            << "4. Quit\n";
        cout << "--> ";
        cin >> choice;

        switch(choice){
        case ADD:
            newItem = getItem();

            addItemToFile(newItem);

            readInData(myInventory, size);
            break;
        case LIST:
            createReport(myInventory, size);
            break;
        case CALC:
            total = totalCost(myInventory, size);
            cout << "\n Total cost of items is: " << fixed << setprecision(2) << total << endl;
            break;
        case QUIT:
            return -1;
            break;
        default:
            cout << "\nIncorrect Input... Try again." << endl;
        }
    }while(choice != QUIT);


}

void readInData(Inventory arr[], int& size){
    fstream inFile("Inventory", ios::in);

    size = 0;
    
    while(inFile >> arr[size].itemNumber){
        inFile >> arr[size].itemName;
        inFile >> arr[size].itemCount;
        inFile >> arr[size].itemPrice;

        size++;
    }

    inFile.close();
}

void createReport(Inventory arr[], int size){
    for(int i = 0; i < size; i++){
        cout << setw(15) << left << arr[i].itemNumber;
        cout << setw(20) << left << arr[i].itemName;
        cout << setw(10) << left << arr[i].itemCount;
        cout << fixed << showpoint << setprecision(2) << right << setw(10) << arr[i].itemPrice;
        cout << "\n";
    }
}

Inventory getItem(){
    string tempString;
    string tempString2;
    int tempInt = 0;
    double tempDouble = 0;

    cout << "Id -> ";
    cin >> tempString;
    cout << "Name -> ";
    cin >> tempString2;
    cout << "Count -> ";
    cin >> tempInt;
    cout << "Price -> ";
    cin >> tempDouble;

    cout << endl;

    Inventory newItem;
    newItem.itemNumber = tempString;
    newItem.itemName = tempString2;
    newItem.itemCount = tempInt;
    newItem.itemPrice = tempDouble;

    return newItem;

}

void addItemToFile(const Inventory &toFile){
    fstream outFile("Inventory" , ios::app);

    outFile << toFile.itemNumber << " "
            << toFile.itemName << " "
            << toFile.itemCount << " "
            << toFile.itemPrice << "\n";

    outFile.close();
}

double totalCost(Inventory arr[], int size){
    double sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i].itemPrice * arr[i].itemCount;
    }

    return sum;
}