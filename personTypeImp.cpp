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
    return firstName;
}

string personType::getMiddleName() const
{
    return middleName;
}

string personType::getLastName() const
{
    return lastName;
}

//constructor
personType::personType(string first, string middle, string last)

{
    firstName = first;
    middleName = middle;
    lastName = last;
}
