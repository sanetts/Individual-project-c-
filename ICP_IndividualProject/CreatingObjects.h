//
// Created by Sandra on 27/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_CREATINGOBJECTS_H
#define ICP_INDIVIDUALPROJECT_CREATINGOBJECTS_H

#include <string>
#include "Airport.h"
#include "Airline.h"
#include "Route.h"
using namespace std;

class CreatingObjects{
public:
    static Airport createAirportObject(vector<string> airportArray);
    static Airline createAirlineObject(vector<string> airlineArray);
    static Route createRouteObject(vector<string>routesArray);
    static string getAirportid(const string& city, const string& country);

};

#endif //ICP_INDIVIDUALPROJECT_CREATINGOBJECTS_H
