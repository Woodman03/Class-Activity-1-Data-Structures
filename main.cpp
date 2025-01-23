// Name: Dillon Wood
// Date: 01/18/23
// Description: Programming Assignment #1

//Test Program personType with first name and last name

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    personType student("Lisa", "Amber", "Regan");



    student.print();

    cout << endl;


    //     string firstName;
    //     string lastName;


    //     cout << "Please enter the first student's first name: ";
    //     cin >> firstName;
    //     cout << "Please enter the first student's middle name: ";
    //     cin >> middleName;
    //     cout << "Please enter the first student's last name: ";
    //     cin >> lastName;

    //   personType student2;

    //   student2.setName(firstName, middleName, lastName);


    //     cout << "Second student's first name: " << student2.getFirstName() << endl;
    //     cout << "Second student's middle name: " << student2.getMiddleName() << endl;
    //     cout << "Second Student's last name: " << student2.getLastName() << endl;
    return 0;
}