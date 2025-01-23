//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName; // return first name
}

string personType::getMiddleName() const
{
    return middleName; // return middle name
}

string personType::getLastName() const
{
    return lastName; // return last name
}

//constructor
personType::personType(string first, string middle, string last)

{
    firstName = first; // constructor for first name
    middleName = middle; // constructor for middle name
    lastName = last; // constructor for last name
}
