//
// Created by Morgan Sarpong on 27/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_NODE_H
#define ICP_INDIVIDUALPROJECT_NODE_H

//
// Created by Morgan Sarpong on 27/11/2022.
//

#include "Node.h"
#include "Path.h"
#include <cstddef>
#include <string>
using namespace std;
class Node {
private:
    int state;
    Node *parent;
    int action;
    double pathcost;

public:
    Node(int state, Node *parent, int action, double pathcost);


    Node(int state);
    bool operator== (const Node &otherNode) const;

    int getState() const;

    Node* getParent();
    int getAction() const;
    double getPathCost() const;
    string toString();
    Path solutionPath();
};

#endif //ICP_INDIVIDUALPROJECT_NODE_H
