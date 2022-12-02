//
// Created by Morgan Sarpong on 28/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_GETOBJECT_H
#define ICP_INDIVIDUALPROJECT_GETOBJECT_H
#include "Airport.h"
#include "Route.h"
#include <unordered_map>
#include "Path.h"


class GetObject {
public:
    static void populateAirportObjects();
    static vector<Airport>AirportObjects;
    static void populateRouteObjects();
    static unordered_map<int, vector<Route>> routeObjects;
    static vector<int> getAirportByCityCountry(const string& city, const string& country);
    static vector<Path> allPaths;
};


#endif //ICP_INDIVIDUALPROJECT_GETOBJECT_H
