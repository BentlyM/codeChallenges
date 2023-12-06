#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct partnerRec{
	string partnerName;
	double clubUnits;
	double marketValue;
	double rateofReturn;
};


const int SIZE = 50;

// variable prototypes
void readInPartners(partnerRec[], int&);
void displayPerformance(partnerRec[], int);
double getMarketValue(partnerRec[], int); // returning something

int main() {
	partnerRec lofClub[SIZE];
	const int displayM = 1, displayC = 2, EXIT = 3;
	double totalValue = 0.0;
	int size = 0;
	int choice;

	cout << "\nLadies of Fortune..." << endl;
	readInPartners(lofClub , size);

	do {

		cout << "\n1. Display member performance report.\n"
			<< "2. Display club's market Value.\n"
			<< "3. Quit.\n";
		cout << "--> ";
		cin >> choice;

		if(choice > 3 || choice < 1){
			cout << "Error." << endl;
			exit(EXIT_FAILURE);
		}else{
			switch (choice) {
		case displayM:
			displayPerformance(lofClub, size);
			break;
		case displayC:
			totalValue = getMarketValue(lofClub, size);
			cout << fixed << setprecision(2) << "\nTotal Market Value of Club: " << totalValue << endl;
			break;
		case EXIT:
			return -1;
			break;
		default:
			cout << "Prompt Not Found... Incorrect input\n\n";
		}
		}

		cout << endl;

	} while (choice != EXIT);



}

void readInPartners(partnerRec arr[], int& size) {
	fstream inFile("ladies", ios::app);
	if (!inFile) {
		cout << "\nCritical Error... File Not Found.";
			exit(EXIT_FAILURE);
	}
	size = 0;

	while (inFile >> arr[size].partnerName)
	{
		inFile >> arr[size].clubUnits;
		inFile >> arr[size].marketValue;
		inFile >> arr[size].rateofReturn;

		size++; // incremements size also changed "n" to size cause its better
	}

	inFile.close();

}

void displayPerformance(partnerRec arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << left << setw(35) << arr[i].partnerName << right << setw(8) << arr
		<< setw(9) << arr[i].clubUnits << setw(14) << arr[i].marketValue
		<< setw(16) << arr[i].rateofReturn << endl;
		}
		cout << endl;
}

double getMarketValue(partnerRec arr[], int size) {

	double sum = 0.0;

	for (int i = 0; i < size; i++) {
		sum += arr[i].marketValue;
	}

	return sum;
}