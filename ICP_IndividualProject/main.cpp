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
#include "CreatingObjects.h"

int main() {

//    std::cout << "Hello, World!" << std::endl;
//    fileReader("/Users/mac/CLionProjects/ICP_IndividualProject/routes.csv");
//    fileReader("/Users/mac/CLionProjects/ICP_IndividualProject/airlines.csv");
//    fileReader("/Users/mac/CLionProjects/ICP_IndividualProject/airports.csv");
//    static unordered_map<int, Airport> airportData = new unordered_map<>();
//    static unordered_map<int, Airline> airlineData = new HashMap<>();
//    static HashMap<Integer, ArrayList<Route>> routeData = new HashMap<>();
//
//
//}

GetObject gobj;
gobj.the_main();
cout << "The Airport code for Accra Ghana is: ";
cout << CreatingObjects::getAirportid("Accra","Ghana") << endl;
}