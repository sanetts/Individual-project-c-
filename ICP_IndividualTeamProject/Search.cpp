//
// Created by Morgan Sarpong  on 29/11/2022.
//
#include "Search.h"
#include "Node.h"
#include "Route.h"
#include "GetObject.h"
#include "Haversine.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include <unordered_set>

using namespace std;
/**
 *
 * @param sourceAirportId
 * @param destinationAirportId
 */
void Search::UniformCostSearch(int sourceAirportId, int destinationAirportId) {
    cout << "\nAbout to do Uniform Cost Search on problem: " << sourceAirportId;
    cout << " to " << destinationAirportId << endl;

    deque<Node> frontier;
    unordered_set<int> explored;

    Node *parentNode = new Node(sourceAirportId);
    frontier.push_back(*parentNode);

    while (!(frontier.empty())) {

//        pop a node from the from of the frontier
        Node *node = new Node(frontier.front());
        frontier.pop_front();

//        goal test: checks if the state is equal to the destination airport id
        if (node->getState() == destinationAirportId) {
            cout << "Found a solution " << node->getState() << endl;
            GetObject::allPaths.push_back(node->solutionPath());
            return;
        }

        explored.insert(node->getState());
        cout << "Expanding Node: " << node->getState() << endl;

        try {
            vector<Route> neighbours = GetObject::routeObjects.at(node->getState());

            for (Route route: neighbours) {
                try {
                    int newState = route.getDestinationAirportid();
                    double pathCost = node->getPathCost() + Haversine::getDistance(node->getState(), newState);
                    Node child = Node(newState, node, newState, pathCost);
                    auto iter = find(frontier.begin(), frontier.end(), child);
                    if (explored.find(newState) == explored.end() && iter == frontier.end()) {
                        frontier.push_back(child);
                    }

                } catch (exception &e) { cout << e.what() << endl; }
            }
        } catch (exception e) { cout << e.what() << endl; }
    }
    cout << "No route exist!";
    return;
}