#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;

string FavFood(string name){
    string foods = "";

    cout << "Hi " << name << "please emter your 3 favorite foods by a space:";
    getline(cin , foods);

    return foods;
}

string FavNums(){

}


int main(){
    string fullname = "", firstname = "", lastname = "";
    string foods = "", newFood = "", play_again = "";
    int newNum = 0 , nums = 0;

    cout << "Welcome to my program!!" << "\n";
    cout << "Enter your fullname";
    getline(cin , fullname);
    int spaceIndex = fullname.find(" ");
    string firstName = fullname.substr(0, spaceIndex);
    string lastName = fullname.substr(spaceIndex + 1);

    printf("Let's get started...");
    newFood = FavFood(fullname);

}