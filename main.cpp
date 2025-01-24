// Name: Dillon Wood
// Date: 01/18/23
// Description: Programming Assignment #1

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    // personType object
    personType student("Mary", "Beth", "Regan");

    // variables for user input name
    string firstNameIn, middleNameIn, lastNameIn;

    // user input first name
    cout << "Enter first name:  ";
    getline(cin, firstNameIn);

    // user input middle name
    cout << "Enter middle name: ";
    getline(cin, middleNameIn);

    // user input last name
    cout << "Enter last name:   ";
    getline(cin, lastNameIn);

    // print given name and user input name
    cout << "\n./././././././././././././././././././././././././././././././././././././.\n" << endl;
    cout << "The Student's Name Is:   " << student.getFirstName() << " " << student.getMiddleName() << " " << student.getLastName() << endl;
    cout << "The Name You Entered Is: " << firstNameIn << " " << middleNameIn << " " << lastNameIn << endl;
    cout << "\n./././././././././././././././././././././././././././././././././././././.\n" << endl;


    // check if the first name matches
    if (student.FirstName(firstNameIn)) 
    {
        cout << "First name matches." << endl;
    }
    else 
    {
        cout << "First name does not match." << endl;
    }

    // check if the middle name matches
    if (student.getMiddleName() == middleNameIn) 
    {
        cout << "Middle name matches." << endl;
    }
    else {
        cout << "Middle name does not match." << endl;
    }

    // check if the last name matches
    if (student.LastName(lastNameIn)) 
    {
        cout << "Last name matches." << endl;
    }
    else {
        cout << "Last name does not match." << endl;
    }

    return 0;
}