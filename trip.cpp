#include "Trip.h"
#include <iostream>
using namespace std;

Trip::Trip() 
{
    date = "10 May";
    time = "10:00 AM";
}

void Trip::bookVisit() 
{
    cout << "Booking visit..." << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Booking confirmed!" << endl;
}