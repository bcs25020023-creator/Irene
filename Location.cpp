#include "Location.h"
#include <iostream>
using namespace std;

Location::Location() 
{
    name = "Unknown Location";
    description = "No description";
}

void Location::displayInfo() 
{
    cout << "Location: " << name << endl;
    cout << "Description: " << description << endl;
}