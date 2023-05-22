#ifndef OBJECT
#define OBJECT
#include "Coordinates.h"
#include <vector>
#include <iostream>
class Object {
public:    
    Coordinates currentCoord;  
    vector<Coordinates> path; 
    Object(Coordinates coordinates) {  
        this->currentCoord = coordinates;
        path.push_back(coordinates);   
    }

    void moveTo(const Coordinates& coordinates);

    double getPathLength() const ;

    double getDistanceTo(const Coordinates& coordinates) const;
};

class UserEquipment : public Object {
public:
    UserEquipment(Coordinates coordinates) : Object(coordinates){};
    void move(double x, double y, double z);
    Coordinates getCurrentCoordinates() const ;
    void convertToGeographicCoord();
};
#endif