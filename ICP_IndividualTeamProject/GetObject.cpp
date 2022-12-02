//
// Created by Morgan Sarpong on 28/11/2022.
//

#include "GetObject.h"
#include "vector"
#include "FileReader.h"
#include "CreatingObjects.h"

/**
 * these data structures are responsible for storing the airport, routes and paths
 */
vector<Airport> GetObject :: AirportObjects;
unordered_map<int, vector<Route>> GetObject::routeObjects;
vector<Path> GetObject::allPaths;


void GetObject :: populateAirportObjects(){
    string filePath = "/Users/sandra/Downloads/ICP_IndividualProject/cmake-build-debug/airports.csv";
    vector<vector<string>> AirportArray = fileReader(filePath);
    for(const vector<string>& array : AirportArray){
        Airport AirportObject = CreatingObjects::createAirportObject(array);
        GetObject::AirportObjects.push_back(AirportObject);
    }
}

/**
 * this method returns the airportid given the city and country since we will be performing
 * our search using the source airport id and destination airport id
 * @param city
 * @param country
 * @return
 */
vector<int> GetObject::getAirportByCityCountry(const string& city, const string& country) {
    vector<int> airportIds;

    for (const Airport& airport: AirportObjects) {
        if (airport.getCity() == city && airport.getCountry() == country) {
            airportIds.push_back(airport.getAirportid());
        }
    }

    return airportIds;
}



void GetObject::populateRouteObjects() {
    string filePath = "routes.csv";
    vector<vector<string>> RouteArray = read(filePath);
    for (const vector<string>& array: RouteArray) {
        Route RouteObject = CreatingObjects::createRouteObject(array);
        // check if the route is valid
        // a route object is valid if both the source and destination airport is not null
        if (RouteObject.getSourceAirportid() != 0 && RouteObject.getDestinationAirportid() != 0) {
            if (routeObjects.find(RouteObject.getSourceAirportid()) == routeObjects.end()) {
                vector<Route> value;
                value.push_back(RouteObject);
                routeObjects.insert({RouteObject.getSourceAirportid(), value});
            } else {
                vector<Route> value = routeObjects.at(RouteObject.getSourceAirportid());
                value.push_back(RouteObject);
                routeObjects[RouteObject.getSourceAirportid()] = value;
            }
        }
    }
}
