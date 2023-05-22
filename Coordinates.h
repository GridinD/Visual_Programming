#ifndef COORDINATES
#define COORDINATES
#include <iostream>
#include <vector>
#include <cmath>
class Coordinates {
private:
    double x;
    double y;  
    double z; 
    double latitude;
    double longitude;
public:
    Coordinates(double x = 0, double y = 0, double z = 0);

    void setCoordinates(double x, double y, double z);

    double getX() const;

    double getY() const;
    
    double getZ() const;

    double getLatitude() const;

    double getLongitude() const;
};
#endif
