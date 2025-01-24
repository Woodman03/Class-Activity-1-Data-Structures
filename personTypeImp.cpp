//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

// display full name 
void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName << endl;
}

// set full name
void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

// set last name specifically
void personType::setLastName(string last)
{
    lastName = last;
}

// set first name specifically
void personType::setFirstName(string first)
{
    firstName = first;
}

// set middle name specifically
void personType::setMiddleName(string middle)
{
    middleName = middle;
}

// function to check last name
bool personType::LastName(string last) const
{
    return (lastName == last);
}

// function to check first name
bool personType::FirstName(string first) const
{
    return (firstName == first);
}

// return first name
string personType::getFirstName() const
{
    return firstName;
}

// return middle name
string personType::getMiddleName() const
{
    return middleName;
}

// return last name
string personType::getLastName() const
{
    return lastName;
}

//constructor
personType::personType(string first, string middle, string last)

{
    firstName = first; // constructor for first name
    middleName = middle; // constructor for middle name
    lastName = last; // constructor for last name
}
