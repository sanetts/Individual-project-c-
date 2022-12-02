//
// Created by Morgan Sarpong on 29/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_HAVERSINE_H
#define ICP_INDIVIDUALPROJECT_HAVERSINE_H
#include<cmath>
using namespace std;

class Haversine {

public:
    static double haversine(double lat1, double lon1, double lat2, double lon2);

    static double getDistance(int sourceAirportId, int destinationAirportId);
};

#endif //ICP_INDIVIDUALPROJECT_HAVERSINE_H
