//
// Created by Sandra  on 29/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_SEARCH_H
#define ICP_INDIVIDUALPROJECT_SEARCH_H

#include "Path.h"

class Search {

public:
    /**
     * implements the uniform cost search
     * @param sourceAirportId
     * @param destinationAirportId
     */
        static void UniformCostSearch(int sourceAirportId, int destinationAirportId);
};

#endif //ICP_INDIVIDUALPROJECT_SEARCH_H
