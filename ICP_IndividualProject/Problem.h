//
// Created by Morgan Sarpong on 27/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_PROBLEM_H
#define ICP_INDIVIDUALPROJECT_PROBLEM_H
#include <vector>
using namespace std;

/**
     * Generic problem class and instance variables
     */
template<class T>
class Problem {
public:
    const T initstate;
    const T goalstate;
/**
     * the constructor builds and initialise the objects of the abstract Problem class
     *
     * @param initstate (the initial state of the problem)
     * @param goalstate (the goal state of the problem)
     */

    Problem(T initstate, T goalstate){
        this->initstate = initstate;
        this->goalstate = goalstate;
    }

    /**
 * returns whether a given state is the goal state
 * @param state (the state of the problem at a point in time)
 * @return boolean
 */
    bool goalTest(T state){
        return (this->goalstate == state);
    }

    vector<T> actions(T state){
        return NULL;
    }


};


#endif //ICP_INDIVIDUALPROJECT_PROBLEM_H
