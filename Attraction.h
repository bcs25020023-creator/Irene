#ifndef ATTRACTION_H
#define ATTRACTION_H

#include "Location.h"

class Attraction : public Location 
{
public:
    void displayInfo() override;   
};

#endif