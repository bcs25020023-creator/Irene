#include <iostream>
#include "User.h"
#include "Location.h"
#include "Attraction.h"
#include "Trip.h"

using namespace std;

int main() 
{
    User u;
    u.registerUser("Joan", "1234");
    u.login("Joan", "1234");

    cout << "------------------" << endl;

    Trip t;
    t.bookVisit();

    cout << "------------------" << endl;

    Location* loc;
    loc = new Attraction();
    loc->displayInfo();

    return 0;
}