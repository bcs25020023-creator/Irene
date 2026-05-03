#ifndef TRIP_H
#define TRIP_H

#include <string>
using namespace std;

class Trip 
{
private:
    string date;
    string time;

public:
    Trip();
    void bookVisit();
};

#endif