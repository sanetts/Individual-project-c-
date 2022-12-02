#include <iostream>
#include "FileReader.h"
#include "unordered_map"
#include "Airport.h"
#include "Airline.h"
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "GetObject.h"
#include "Search.h"
#include "CreatingObjects.h"
#include "Haversine.h"
using namespace std;
int main() {
    /**
      * Populating hashmap and reading input file to obtain the source city and Destination
      * to be passed into the Uniform cost search algorithm.
      */

    GetObject::populateRouteObjects();

//    for (pair<int, vector<Route>> route: GetObject::routeObjects) {
//        for (const Route& routeObj: route.second) {
//            cout << "object created" << endl;
//            cout << routeObj.getSourceAirportid() << endl;
//        }
//    }

// --- get the various ids using the city and country ---
    GetObject::populateAirportObjects();

//    cout << "The Airport id for Accra Ghana is: ";
//    cout << "The Airport id for Winnipeg Canada is: ";
//    vector<int> sourceAirportIds = GetObject::getAirportByCityCountry("Accra","Ghana");
//    vector<int> sourceAirportIds = GetObject::getAirportByCityCountry("Winnipeg","Canada");

//    for (Airport airport: GetObject::AirportObjects) {
//        cout << airport.ToString();
//    }
//    for (int id:sourceAirportIds) {
//        cout << id;
//
//    }
//    Search search1;

    Search::UniformCostSearch(248,160);
    cout << GetObject::allPaths.size();


// ----- uncomment to run -------

    //Path path = Path({248,1074,146,160}, 46564.76);
    //string data = path.SolutionString();
    //writeTofile("output.txt", data);
}
