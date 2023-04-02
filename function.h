//This reduces build times
#pragma once
//It includes the string header file
#include <string>
//This allows to use names for objects and variables from the library
using namespace std;
//The function does not return a value
void display();
int countPlayer();

class GameStructure
{
public:
    string name;
    int health;
    
public:
    void setName(string name){
        this->name = name;
    }
    
    string getName(){
        cout << name << endl;
        return name;
    }
    
    virtual void help() = 0;
    
};

class Character : public GameStructure
{
private:
    string health;

private:
    void setHealth(string setHealth){
        health = setHealth;
        //This says the characters health has come to an end 
        cout << "Character has expired" << endl;
    }
    
    string getHealth(){
        cout << health << endl;
        return health;
    }
     
    void Talk(string stuffToSay){
        cout << stuffToSay << endl;
    }
    
    void Talk(string name, string stuffToSay){
        cout << name << endl;
        cout << stuffToSay << endl;
    }
    
    public:
        virtual int attack()
    {
            //This shows the attack will be ten points
            cout << "Attack: 10 points" << endl;
            return 10;
        }
        
};


class Pirate : public Character
{
    
public:
    
    void useSword()
    {
        //This says what they are doing with the sword
        cout << "I am swooshing my sword!" << endl;
    }
    //Constructor 
    Pirate(string name)
    {
        this->name = name;
    }
    
    void Help()
    {
        //This gives a description about pirates and asks them a question
        cout << "Pirates are cool and daring. How good are your sword skills?" << endl;
    }
    
    virtual int attack()
    {
        //This shows the attack will be twenty five points
        cout << "Attack: 25 points" << endl;
        return 25;
    }
};

class Ninja : public Character
{
public:
    
    void throwStars()
    {
        //This says what they are doing with the stars
        cout << "I am throwing stars!" << endl;
    }
    //Constructor
    Ninja(string name)
    {
        this->name = name;
    }

    
    void Help()
    {
        //This gives a description about ninjas and asks them a question
        cout << "Ninja's are awesome and deadly. How good are your star throwing skills?" << endl;
            
    }
    
    virtual int attack()
    {
    //This shows the attack will be twenty five points
    cout << "Attack: 25 points" << endl;
    return 25;
    }


};


