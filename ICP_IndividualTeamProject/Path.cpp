//
// Created by Morgan Sarpong  on 30/11/2022.
//

#include "Path.h"
#include "Route.h"
#include "GetObject.h"


Path::Path() = default;
/**
 * Constructor of the path class which contains the actions and pathcosts from the source to
 * destination
 * @param actions
 * @param pathCost
 */
Path::Path(vector<int> actions, double pathCost) {
    this->actions = actions;
    this->pathCost = pathCost;
}
/**
 *
 * @return actions
 */
vector<int> Path::getActions(){
    return actions;
}

/**
 *
 * @return pathCost
 */
double Path::getPathCost() {
    return pathCost;
}

/**
 * this method returns  a solution which is a summary of the various
 * flights, stops, and distance computed using the haversine formula
 * @return solutionString
 */
string Path::SolutionString() {
    string solutionString;
    int count = 0;
    int totalStops = 0;
    vector<int> actions = this->getActions();

    for (int airportid: actions ) {
        for (const Route& route: GetObject::routeObjects.at(airportid)) {
            if (count < (actions.size() -1)) {
                if (route.getDestinationAirportid() == actions[count + 1]) {
                    solutionString += to_string(count + 1) + ". " + route.getAirlineCode() + " from " +
                          GetObject::AirportObjects.at(route.getSourceAirportid()).getIataCode() + " to " +
                          GetObject::AirportObjects.at(route.getDestinationAirportid()).getIataCode() + " " +
                          to_string(route.getStops()) + " stops.\n";
                    count ++;
                    totalStops += route.getStops();
                }
            }
        }
    }
    solutionString +="\n Total flights: " + to_string(actions.size() - 1);
    solutionString +="\n Total extra stops: " + to_string(totalStops);
    solutionString +="\n Total distance: " + to_string(Path::getPathCost()) + "km";
    solutionString +="\n Optimality criteria: distance covered by route";

    return solutionString;
}

