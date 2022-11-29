//
// Created by Morgan Sarpong on 24/11/2022.
//

#include "Route.h"

string Route::ToString() {
    return "Route {"
           "airlineCode='" + airlineCode + '\'' +
           ", airlineID=" + to_string(airlineid) +
           ", sourceAirportCode='" + sourceAirportCode + '\'' +
           ", sourceAirportID=" + to_string(sourceAirportid) +
           ", destinationAirportCode='" + destinationAirportCode + '\'' +
           ", destinationAirportID=" + to_string(destinationAirportid) +
           ", codeShare='" + codeShare + '\'' +
           ", stops=" + to_string(stops) +
           ", equipment='" + equipment + '\'' +
           '}';
}

const string &Route::getAirlineCode() const {
    return airlineCode;
}

void Route::setAirlineCode(const string &airlineCode) {
    Route::airlineCode = airlineCode;
}

int Route::getAirlineid() const {
    return airlineid;
}

void Route::setAirlineid(int airlineid) {
    Route::airlineid = airlineid;
}

const string &Route::getSourceAirportCode() const {
    return sourceAirportCode;
}

void Route::setSourceAirportCode(const string &sourceAirportCode) {
    Route::sourceAirportCode = sourceAirportCode;
}

int Route::getSourceAirportid() const {
    return sourceAirportid;
}

void Route::setSourceAirportid(int sourceAirportid) {
    Route::sourceAirportid = sourceAirportid;
}

const string &Route::getDestinationAirportCode() const {
    return destinationAirportCode;
}

void Route::setDestinationAirportCode(const string &destinationAirportCode) {
    Route::destinationAirportCode = destinationAirportCode;
}

int Route::getDestinationAirportid() const {
    return destinationAirportid;
}

void Route::setDestinationAirportid(int destinationAirportid) {
    Route::destinationAirportid = destinationAirportid;
}

const string &Route::getCodeShare() const {
    return codeShare;
}

void Route::setCodeShare(const string &codeShare) {
    Route::codeShare = codeShare;
}

int Route::getStops() const {
    return stops;
}

void Route::setStops(int stops) {
    Route::stops = stops;
}

const string &Route::getEquipment() const {
    return equipment;
}

void Route::setEquipment(const string &equipment) {
    Route::equipment = equipment;
}
