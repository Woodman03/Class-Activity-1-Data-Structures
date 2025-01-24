//personType.h

#include <string> 

using namespace std;

class personType
{
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setName(string first, string middle, string last);
    //Function to set firstName, middleName, and lastName according 
    //to the parameters.
    //Postcondition: firstName = first; middleName = middle; lastName = last

    void setLastName(string last);
    // Function to set lastName; lastName = last

    void setFirstName(string first);
    // Function to set firstName; firstName = first

    void setMiddleName(string middle);
    // Function to set middleName; middleName = middle

    bool LastName(string last) const;
    // Bool function for lastName

    bool FirstName(string first) const;
    // Bool function for first name

    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.

    string getMiddleName() const;
    //Function to return the middle name.
    //Postcondition: The value of middleName is returned.

    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.

    personType(string first = "", string middle = "", string last = "");
    //Constructor
    //Sets firstName, middleName, and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; middleName = middle; lastName = last  

private:
    string firstName; //variable to store the first name
    string middleName; // variable to store the middle name
    string lastName;  //variable to store the last name
};

