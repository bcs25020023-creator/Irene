#ifndef LOCATION_H
#define LOCATION_H

#include <string>
using namespace std;

class Location {
protected:
    string name;
    string description;

public:
    Location();
    virtual void displayInfo();  
};

#endif