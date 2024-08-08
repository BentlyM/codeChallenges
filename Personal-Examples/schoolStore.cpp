/*

	Bently Metayer

	schoolStore.cpp

	Menu-Driven interface program that allows that user to:
		1. Add new item to inventory.
		2. List inventory items.
		3. Calculate total cost of inventory.
		4. Quit
*/

// Header files
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// Data Types
struct Inventory {
	string itemNumber;
	string itemName;
	int itemCount;
	double itemPrice;
    
};

// Global constant
const int SIZE = 50;

// Function Prototypes
Inventory getItem();
void readInData(Inventory[], int&);
void createReport(Inventory[], int);
void addItemToFile(const Inventory&);
double totalCost(Inventory[], int);

int main()
{
	// constants & variables
	const int ADD = 1, LIST = 2, CALC = 3, QUIT = 4;
	Inventory myInventory[SIZE];
	Inventory newItem;
	double total;
	int size; // Number of items in array
	int choice;

	// Intro
	cout << "\nInventory Management System ..." << endl;

	// Read Contents from file into myInventory[]
	readInData(myInventory, size);

	// Menu 

	do {
		// Dipslay menu & prompt user for choice
		cout << "\nChoose one of the following options " << endl
			<< "\t1. Add new item to inventory." << endl
			<< "\t2. List inventory items." << endl
			<< "\t3. Calculate total cost of inventory. " << endl
			<< "\t4. Quit" << endl
			<< "Option: ";
		cin >> choice;

		// Drive menu option
		switch (choice) {
		case ADD:
			// Prompt user for item
			newItem = getItem();

			// add item to file
			addItemToFile(newItem);

			//Reload Array
			readInData(myInventory, size);
			break;
		case LIST:
			// Displays Report
			createReport(myInventory, size);
			break;
		case CALC:
			// Calculates Report and displays it
			total = totalCost(myInventory, size);
			cout << "\nTotal Cost is $" << fixed << setprecision(2) << total << endl;
			break;
		case QUIT:
			cout << "\n Good Bye ..." << endl;
			break;
		default:
			cout << "Error ... Invalid option. Try again. " << endl;
		}
	} while (choice != QUIT);
}

/*
	void readintData(inventory arry[), int& size )
	read records form inventory.txt int arr[] amd return
	through the reference parameter size, the number of items
	read.

	return value : none

	*/

void readInData(Inventory arr[], int& size) {
	fstream inFile;

	inFile.open("Inventory", ios::in); // used visual studio for this so didnt need to put .txt and powershell
	if (!inFile)
	{
		cout << "Fatal error ... Could not open inventory File." << endl;
		exit(EXIT_FAILURE);
	}

	//Read records into arr[]
	size = 0;
	while (inFile >> arr[size].itemNumber)
	{
		inFile >> arr[size].itemName;
		inFile >> arr[size].itemCount;
		inFile >> arr[size].itemPrice;

		size++;
	}

	inFile.close();
}

/*
    void createReport()
    create a report on the inventory data. The report should include
    the item number, name and price for each item.

    return value : none

*/

void createReport(Inventory arr[],int size) {
    cout << "\n*******************************Inventory Report*************************" << endl;
    cout << left << setw(15) << "Item Number";
    cout << left << setw(20) << "Item Name";
    cout << left << setw(10) << "Item Count";
    cout << right << setw(14) << "Price($)" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << setw(15) << left << arr[i].itemNumber;
        cout << setw(20) << left << arr[i].itemName;
        cout << setw(10) << left << arr[i].itemCount;
        cout << fixed << showpoint << setprecision(2) << right << setw(10) << arr[i].itemPrice;
        cout << "\n";
    }

}

/*
	Inventory getItem()

	prompts user to get item by storing it in temp variables in instance to newItem

	return value : newItem
*/

Inventory getItem() {
    // Declare variables
    string tempString;
    string tempString2;
    double tempDouble = 0;
    int tempInt = 0;
    
    // Get user input
    cout << "\nEnter Item Number: ";
    cin >> tempString;
    cout << "\nEnter Item Name: ";
    cin >> tempString2;
    cout << "\nEnter Item Count: ";
    cin >> tempInt;
    cout << "\nEnter Item Price: $";
    cin >> tempDouble;
    cout << endl;

    // Create new object with values from user input
    Inventory newItem;
    newItem.itemNumber = tempString;
    newItem.itemName = tempString2;
    newItem.itemCount = tempInt;
    newItem.itemPrice = tempDouble;

    return newItem;
}

/*
	void addItemToFile(); -- made it a reference

	grabs newItem as a constant appends toFile threw outFile

	return value : none
*/

void addItemToFile(const Inventory& toFile) {

    fstream outFile("Inventory", ios::app);
    if (!outFile) {
        cerr << "Error opening file." << endl;
        return;
    }

    outFile << toFile.itemNumber << " "
            << toFile.itemName << " "
            << toFile.itemCount << " "
            << toFile.itemPrice << "\n";

    outFile.close();
}

/*
	void totalCost();

	Calculates Total

	return value: Sum

*/

double totalCost(Inventory arr[], int size){
	double sum=0;
	for (int i=0;i<size;i++){
		sum+=arr[i].itemPrice*arr[i].itemCount;
		}
		return sum;
}