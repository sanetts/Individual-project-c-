//
// Created by Morgan Sarpong on 27/11/2022.
//

#include "Node.h"
#include <cstddef>
#include <string>
#include <iostream>
using namespace std;

/**
 * Constructor for the Node class
 * @param state
 * @param parent
 * @param action
 * @param pathcost
 */
Node::Node(int state, Node *parent, int action, double pathcost){
        this->state = state;
        this->parent = parent;
        this->action = action;
        this->pathcost = pathcost;
    }

Node::Node(int state) {
    this->state = state;
    this->parent = nullptr;
    this->action = state;
    this->pathcost = 0.0;
}
 int Node::getState() const {
    return this->state;
}

[[maybe_unused]] Node* Node::getParent() {
    return this->parent;
}
int Node::getAction() const {
    return this->action;
}
double Node::getPathCost() const {
    return this->pathcost;
}
string Node::toString() {
    if (this->parent != nullptr) {
        return "Node {"
               "state=" + to_string(state) +
               ", parent=" + to_string(parent->getState()) +
               ", action=" + to_string(action) +
               ", path_cost=" + to_string(pathcost) +
               '}';
    } else {
        return "Node {"
               "state=" + to_string(state) + '}';
    }
}

Path Node::solutionPath() {
    vector<int> actions;
    double pathCost = this->getPathCost();
    Node *node = this;

    while(node != nullptr) {
        actions.insert(actions.begin(), node->getState());
        node = node -> parent;
        cout << "Parent states: " << node ->state << endl;
    }

    return {actions, pathCost};
}
bool Node::operator==(const Node &otherNode) const {
    return this->state == otherNode.state;
}