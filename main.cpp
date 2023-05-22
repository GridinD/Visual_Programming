#include "Coordinates.h"
#include "Object.h"
using namespace std;
int main() {
    UserEquipment user(Coordinates(0, 0, 0));
    
    user.move(24, 152, 0);
    user.move(1045, 7, 10);
    user.move(0, 0, 20);
    
    double pathLength = user.getPathLength();
    cout << "Path length: " << pathLength << endl;
    
    user.convertToGeographicCoord();
    
    return 0;
}