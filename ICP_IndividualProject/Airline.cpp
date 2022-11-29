//
// Created by Morgan Sarpong on 24/11/2022.
//

#include "Airline.h"

string Airline::ToString(){
    return "Airline { "
           "airlineID='" + to_string(airlineid) + '\'' +
           ", airlineName='" + airlineName + '\'' +
           ", alias='" + alias + '\'' +
           ", IATACode='" + IATACode + '\'' +
           ", ICAOCode='" + ICAOCode + '\'' +
           ", callSign='" + callsign + '\'' +
           ", country='" + country + '\'' +
           ", activeStatus='" + activeStatus + '\'' +
           '}';
}

int Airline::getAirlineid() const {
    return airlineid;
}

void Airline::setAirlineid(int airlineid) {
    Airline::airlineid = airlineid;
}

const string &Airline::getAirlineName() const {
    return airlineName;
}

void Airline::setAirlineName(const string &airlineName) {
    Airline::airlineName = airlineName;
}

const string &Airline::getAlias() const {
    return alias;
}

void Airline::setAlias(const string &alias) {
    Airline::alias = alias;
}

const string &Airline::getIataCode() const {
    return IATACode;
}

void Airline::setIataCode(const string &iataCode) {
    IATACode = iataCode;
}

const string &Airline::getIcaoCode() const {
    return ICAOCode;
}

void Airline::setIcaoCode(const string &icaoCode) {
    ICAOCode = icaoCode;
}

const string &Airline::getCallsign() const {
    return callsign;
}

void Airline::setCallsign(const string &callsign) {
    Airline::callsign = callsign;
}

const string &Airline::getCountry() const {
    return country;
}

void Airline::setCountry(const string &country) {
    Airline::country = country;
}

const string &Airline::getActiveStatus() const {
    return activeStatus;
}

void Airline::setActiveStatus(const string &activeStatus) {
    Airline::activeStatus = activeStatus;
}
