//
// Created by Morgan Sarpong on 24/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_ROUTE_H
#define ICP_INDIVIDUALPROJECT_ROUTE_H
#include<string>//;
using namespace std;

class Route {
private:
    string airlineCode;
    int airlineid;
    string sourceAirportCode;
    int sourceAirportid;
    string destinationAirportCode;
    int destinationAirportid;
    string codeShare;
    int stops;
    string equipment;

public:
    Route(string AirlineCode, int Airlineid, string SourceAirportCode, int SourceAirportid,
          string DestinationAirportCode, int DestinationAirportid, string CodeShare,
          int Stops, string Equipment){

        this->airlineCode = AirlineCode;
        this->airlineid = Airlineid;
        this->sourceAirportCode = SourceAirportCode;
        this->sourceAirportid = SourceAirportid;
        this->destinationAirportCode= DestinationAirportCode;
        this->destinationAirportid = DestinationAirportid;
        this->codeShare = CodeShare;
        this->stops = Stops;
        this->equipment = Equipment;

    }
    string ToString();

    const string &getAirlineCode() const;

    void setAirlineCode(const string &airlineCode);

    int getAirlineid() const;

    void setAirlineid(int airlineid);

    const string &getSourceAirportCode() const;

    void setSourceAirportCode(const string &sourceAirportCode);

    int getSourceAirportid() const;



    const string &getDestinationAirportCode() const;

    void setDestinationAirportCode(const string &destinationAirportCode);

    int getDestinationAirportid() const;

    void setDestinationAirportid(int destinationAirportid);

    const string &getCodeShare() const;

    void setCodeShare(const string &codeShare);

    int getStops() const;

    void setStops(int stops);

    const string &getEquipment() const;

    void setEquipment(const string &equipment);
};



#endif //ICP_INDIVIDUALPROJECT_ROUTE_H
