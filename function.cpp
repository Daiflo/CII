//Provides input and output using streams
#include <iostream>
//It includes the string header file
#include <string>
//This includes the function.h file
#include "function.h"
//This allows to use names for objects and variables from the library
using namespace std;

//The function does not return a value
void display ()
{
    //This tells the user about the pirates
    cout << "The people who tame the seas are the Pirates" << endl;
    //This creates a space between the lines
    cout  << "\n";
    //This tells the user about the ninjas
    cout << "The people who uphold the code of honor are the Ninjas" << endl;
    //This creates a space between the lines
    cout  << "\n";
    //This tells the user about the the fight
    cout << "This is a showdown. Pirates Vs Ninjas Last One Standing" << endl;
    //This creates a space between the lines
    cout  << "\n";
}

int countPlayer(){
    int Person;
    //This creates a space between the lines
    cout  << "\n";
    //This asks the person to chose a number from one to ten
    cout << "Please enter a number from 1-10 for the following players"<< endl;
    //This creates a space between the lines
    cout  << "\n";
    //This tells the user that one through four is for pirates
    cout << "1-4 is for the Pirates" << endl;
    //This creates a space between the lines
    cout  << "\n";
    //This tells the user that five through ten is for ninjas
    cout << "5-10 is for the Ninjas" << endl;
    //This creates a space between the lines
    cout  << "\n";
    cin >> Person;
    if (Person >= 5)
    {
        //This creates a space between the lines
        cout  << "\n";
        //This tells them they chose ninja
        cout << "You have chosen Ninja" << endl;
        //This creates a space between the lines
        cout  << "\n";
    }
    else if(Person < 5)
    {
        //This creates a space between the lines
        cout  << "\n";
        //This tells them they chose pirate
        cout << "You have chosen Pirate" << endl;
        //This creates a space between the lines
        cout  << "\n";
    }
    
    return Person;
}


