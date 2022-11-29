////
//// Created by Morgan Sarpong on 27/11/2022.
////
//
//#include "Node.h"
//#include <cstddef>
//#include <string>
//using namespace std;
//class Node {
//private:
//    int state;
//    Node parent;
//    int action;
//    double pathcost;
//
//public:
//    Node(int state, Node parent, int action, double pathcost){
//        this->state = state;
//        this->parent = parent;
//        this->action = action;
//        this->pathcost = pathcost;
//    }
//
//    Node(int state) {
//        this->state = state;
//        this->parent = NULL;
//        this->action = 0;
//        this->pathcost = 0;
//    }
//     int getState() {
//        return this->state;
//    }
//    Node getParent() {
//        return this->parent;
//    }
//    int getAction() {
//        return this->action;
//    }
//    double getPathCost() {
//        return this->pathcost;
//    }
//    string toString() {
//        if (this->parent != NULL) {
//            return "Node {"
//                   "state=" + to_string(state) +
//                   ", parent=" + parent.getState() +
//                   ", action=" + action +
//                   ", path_cost=" + pathcost +
//                   '}';
//        } else {
//            return "Node {"
//                   "state=" + to_string(state) + '}';
//        }
//    }
//
//
//};