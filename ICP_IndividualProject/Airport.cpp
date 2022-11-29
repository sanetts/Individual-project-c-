//
// Created by Morgan Sarpong on 24/11/2022.
//

#include "Airport.h"

string Airport::ToString(){
    return "Airport {" + to_string(airportid)+
           ", airportName='" + airportName + '\'' +
           ", city='" + city + '\'' +
           ", country='" + country + '\'' +
           ", IATACode='" + IATACode + '\'' +
           ", ICAOCode='" + ICAOCode + '\'' +
           ", latitude=" + to_string(latitude) +
           ", longitude=" + to_string(longitude) +
           ", altitude=" + to_string(altitude) +
           ", timezone=" + to_string(timezone) +
           ", DST=" + DST +
           ", Tz='" + Tz + '\'' +
           ", type='" + type + '\'' +
           ", sourceOfData='" + sourceOfData + '\'' +
           '}';

}

int Airport::getAirportid() const {
    return airportid;
}

void Airport::setAirportid(int airportid) {
    Airport::airportid = airportid;
}

const string &Airport::getAirportName() const {
    return airportName;
}

void Airport::setAirportName(const string &airportName) {
    Airport::airportName = airportName;
}

const string &Airport::getCity() const {
    return city;
}

void Airport::setCity(const string &city) {
    Airport::city = city;
}

const string &Airport::getCountry() const {
    return country;
}

void Airport::setCountry(const string &country) {
    Airport::country = country;
}

const string &Airport::getIataCode() const {
    return IATACode;
}

void Airport::setIataCode(const string &iataCode) {
    Airport::IATACode = iataCode;

}

const string &Airport::getIcaoCode() const {
    return ICAOCode;
}

void Airport::setIcaoCode(const string &icaoCode) {
    ICAOCode = icaoCode;
}

const double &Airport::getLatitude() const {
    return latitude;
}

void Airport::setLatitude(double latitude) {
    Airport::latitude = latitude;
}

double Airport::getLongitude() const {
    return longitude;
}

void Airport::setLongitude(double longitude) {
    Airport::longitude = longitude;
}

double Airport::getAltitude() const {
    return altitude;
}

void Airport::setAltitude(double altitude) {
    Airport::altitude = altitude;
}

double Airport::getTimezone() const {
    return timezone;
}

void Airport::setTimezone(double timezone) {
    Airport::timezone = timezone;
}

const string &Airport::getDst() const {
    return DST;
}

void Airport::setDst(const string &dst) {
    DST = dst;
}

const string &Airport::getTz() const {
    return Tz;
}

void Airport::setTz(const string &tz) {
    Tz = tz;
}

const string &Airport::getType() const {
    return type;
}

void Airport::setType(const string &type) {
    Airport::type = type;
}

const string &Airport::getSourceOfData() const {
    return sourceOfData;
}

void Airport::setSourceOfData(const string &sourceOfData) {
    Airport::sourceOfData = sourceOfData;
}
