//Provides input and output using streams
#include <iostream>
//It includes the string header file
#include <string>
//This includes the function.h file
#include "function.h"
//This is the header for one of the most widely used libraries by programmers of the language
#include <cstdlib>
//This returns the string respresenting the localtime based on the argument timer
#include <ctime>
//This allows to use names for objects and variables from the library
using namespace std;
//The function returns some integer at the end of the program
int main ()
{
    //It displays the message
    display();
    //It displays the person function
    int Person;
    Person = countPlayer();
    
    Character character1;
    character1.name();
    
    Pirate pirate1;
    pirate1.useSword();
    
    Ninja ninja1;
    ninja1.throwStars();
    
    Character character1;
    character1.setName();
    character1.getName();
    
    Character character1;
    character1.setHealth();
    character1.getHealth();

    int lives = rand() % 4 + 1;
    int choice = 0;
    int choose;
    
    
    do
    {
        cout << "Choose an option " << endl;
        cin >> choose;
        ++choice;
        if (choose> lives)
        {
            cout << "Continue " << endl;
        }
        else if(choose< lives)
        {
            cout << "Exit " << endl;
        }
        else
        {
            cout << "GAME OVER! " << endl;
        }
        while(choose != lives);
    }

    
    return 0;
    
}
