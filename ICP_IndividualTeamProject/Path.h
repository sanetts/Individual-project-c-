//
// Created by Morgan Sarpong  on 30/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_PATH_H
#define ICP_INDIVIDUALPROJECT_PATH_H

#include <vector>
using namespace std;

class Path {
private:
    vector<int> actions;
    double pathCost{};

public:
    Path();
    Path (vector<int> actions, double pathCost);
    vector<int> getActions();
    double getPathCost();
    string SolutionString();
};


#endif //ICP_INDIVIDUALPROJECT_PATH_H
