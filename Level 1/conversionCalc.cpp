#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int CALCULATE_TEMP = 1, CALCULATE_AREA = 2, EXIT = 3;

double calcTemp(double);
double calcArea(int);

int main(){

    double Celsius = 0;
    double Fahrenheit;
    int Radius = 0;
    double Area;
    int choice;

    cout << "\nTemperature and Area Calculater..." << endl;

    do{
        cout << "1. Caluclate Tempature (Celsius to Fahrenheit)\n";
        cout << "2. Calculate Area (pi * radius^2)\n";
        cout << "3. exit\n";
        cout << "--> ";
        cin >> choice;

        switch(choice){
            case CALCULATE_TEMP:

            cout << "Enter temperature in Celsius: ";
            cin >> Celsius;

            Fahrenheit = calcTemp(Celsius);

            cout << "\nEquivalent temperature in fahrenheit: " << Fahrenheit << "\n\n";

            break;
            case CALCULATE_AREA:

            cout << "Enter the radius of the cirlce: ";
            cin >> Radius;

            Area = calcArea(Radius);

            cout << "Area of the circle: " << Area << "\n\n";
            break;
            case EXIT:
            ;
            break;
            default:
            cout << "Incorrect Input... Try again";
        }
    }while(choice != EXIT);


    
}

double calcTemp(double C){
    double sum;

    sum = (C * 9/5) + 32;
    
    return sum;
}

double calcArea(int R){

    double Pi = 3.14;
    double result;

    result = Pi * pow(R , 2);

    return result;
}
