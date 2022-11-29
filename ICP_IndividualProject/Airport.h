//
// Created by Sandra on 24/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_AIRPORT_H
#define ICP_INDIVIDUALPROJECT_AIRPORT_H
#include<string>//;
using namespace std;


class Airport {
private:
    int airportid;
    string airportName;
    string city;
    string country;
    string IATACode;
    string ICAOCode;
    double latitude;
    double longitude;
    double altitude;
    double timezone;
    string DST;
    string Tz;
    string type;
    string sourceOfData;

public:
    Airport(int airportid, string AirportName, string City, string Country, string IATAcode,
            string ICAOcode, double Latitude, double Longitude, double Altitude, double Timezone,
            string dst, string tz, string Type, string SourceOfData){
        airportid = airportid;
        airportName = AirportName;
        country = Country;
        city = City;
        IATACode = IATAcode;
        ICAOCode = ICAOcode;
        latitude = Latitude;
        longitude = Longitude;
        altitude = Altitude;
        timezone = Timezone;
        DST = dst;
        Tz = tz;
        type = Type;
        sourceOfData = SourceOfData;

    }
    Airport(){
        this->airportid = 0;
        this->airportName = "";
        this->city = "";
        this->country = "";
        this->IATACode = "";
        this->ICAOCode = "";
        this->latitude = 0.0;
        this->longitude = 0.0;
        this->altitude = 0.0;
        this->timezone = 0.0;
        this->DST = "";
        this->Tz = "";
        this->type = "";
        this->sourceOfData = "";
    }

    string ToString();

    int getAirportid() const;

    void setAirportid(int airportid);

    const string &getAirportName() const;

    void setAirportName(const string &airportName);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getCountry() const;

    void setCountry(const string &country);

    const string &getIataCode() const;

    void setIataCode(const string &iataCode);

    const string &getIcaoCode() const;

    void setIcaoCode(const string &icaoCode);

    const double & getLatitude() const;

    void setLatitude(double latitude);

    double getLongitude() const;

    void setLongitude(double longitude);

    double getAltitude() const;

    void setAltitude(double altitude);

    double getTimezone() const;

    void setTimezone(double timezone);

    const string &getDst() const;

    void setDst(const string &dst);

    const string &getTz() const;

    void setTz(const string &tz);

    const string &getType() const;

    void setType(const string &type);

    const string &getSourceOfData() const;

    void setSourceOfData(const string &sourceOfData);
};



#endif //ICP_INDIVIDUALPROJECT_AIRPORT_H
