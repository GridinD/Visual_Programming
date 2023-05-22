#include "Coordinates.h"

Coordinates::Coordinates(double x = 0, double y = 0, double z = 0) {   
        this->x = x;
        this->y = y;
        this->z = z;
        double r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        this->latitude = asin(z / r) * 180 / M_PI;
        this->longitude = atan2(y, x) * 180 / M_PI;
    }

    void Coordinates::setCoordinates(double x, double y, double z) {   
        this->x = x;
        this->y = y;
        this->z = z;
        double r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        this->latitude = asin(z / r) * 180 / M_PI;
        this->longitude = atan2(y, x) * 180 / M_PI;
    }

    double Coordinates::getX() const {    
        return x;
    }

    double Coordinates::getY() const {    
        return y;
    }
    
    double Coordinates::getZ() const {
        return z;
    }

    double Coordinates::getLatitude() const {
        return latitude;
    }

    double Coordinates::getLongitude() const {
        return longitude;
    }