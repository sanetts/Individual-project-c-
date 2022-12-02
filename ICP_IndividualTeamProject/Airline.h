//
// Created by Morgan Sarpong on 24/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_AIRLINE_H
#define ICP_INDIVIDUALPROJECT_AIRLINE_H
#include<string>//;
using namespace std;

class Airline {
private:
    int airlineid;
    string airlineName;
    string alias;
    string IATACode;
    string ICAOCode;
    string callsign;
    string country;
    string activeStatus;

public:
    Airline(int airlineID, string AirlineName, string Alias, string IATAcode, string ICAOcode,
    string Callsign, string Country, string ActiveStatus ){
        airlineid = airlineID;
        airlineName = AirlineName;
        alias = Alias;
        IATACode = IATAcode;
        callsign = Callsign;
        country = Country;
        activeStatus = ActiveStatus;

    }
    string ToString();

    int getAirlineid() const;

    void setAirlineid(int airlineid);

    const string &getAirlineName() const;

    void setAirlineName(const string &airlineName);

    const string &getAlias() const;

    void setAlias(const string &alias);

    const string &getIataCode() const;

    void setIataCode(const string &iataCode);

    const string &getIcaoCode() const;

    void setIcaoCode(const string &icaoCode);

    const string &getCallsign() const;

    void setCallsign(const string &callsign);

    const string &getCountry() const;

    void setCountry(const string &country);

    const string &getActiveStatus() const;

    void setActiveStatus(const string &activeStatus);

};


#endif //ICP_INDIVIDUALPROJECT_AIRLINE_H
