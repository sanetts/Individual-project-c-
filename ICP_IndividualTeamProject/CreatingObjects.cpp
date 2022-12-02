//
// Created by Sandra on 27/11/2022.
//

#include <vector>
#include "CreatingObjects.h"
#include "Airport.h"
#include "Airline.h"
#include <iostream>
#include "GetObject.h"
using namespace std;

/**
     * the method takes a String array representation of the attributes
     * of an airport object, creates and returns an Airport object
     *
     * @param airportArray
     * @return Airport object
     */




Airport CreatingObjects::createAirportObject(vector<string> airportArray) {
    int airportid = 0;
    double latitude = 0.0;
    double longitude = 0.0;
    double altitude = 0.0;
    double timezone = 0.0;
    string airportName ;
    string city;
    string country;
    string IATAcode;
    string ICAOCode;
    string DST;
    string Tz;
    string type;
    string sourceOfData;
/*
 * This section of the code was to handle cases with extra commas in the records.
 * the try catch were empty so that it doesn't return exceptions in the solution which would have made
 * the output messy
 */
    if (airportArray[0] =="641" || airportArray[0] =="657" ||
            airportArray[0] =="658" || airportArray[0] == "664" ||
            airportArray[0] == "3256" || airportArray[0] =="3340" ||
            airportArray[0] == "4345" || airportArray[0] == "4351" ||
         airportArray[0] == "5582" || airportArray[0] == "5583" ||
            airportArray[0] == "5589" || airportArray[0] == "6898" || airportArray[0] == "13714") {

        try {
            latitude = stod(airportArray[6]);
            longitude = stod(airportArray[7]);
            //cout<<latitude<<endl;


        } catch (exception &e) {
          //cout<<"NFE"<<endl;
        }

        airportName = airportArray[1] + airportArray[2];
        //cout<<airportName<<endl;
        city =  airportArray[3];
        country = airportArray[4];
        IATAcode = airportArray[5];
        ICAOCode = airportArray[6];
//        cout<<ICAOCode<<endl;
        DST = airportArray[11];
        Tz = airportArray[12];
        type = airportArray[13];
        sourceOfData = airportArray[14];

    }

    else if(airportArray[0] == "5562" || airportArray[0] == "5674" || airportArray[0] == "5675"
    || airportArray[0] == "5881" ){

try {

    airportid = stoi(airportArray[0]);
    //cout<<airportid<<endl;
    latitude = stod(airportArray[6]);
    //cout<<latitude<< endl;
    longitude = stod(airportArray[7]);
    altitude = stod(airportArray[8]);
    timezone = stod(airportArray[9]);
}
catch(exception &e) {
//cout<< "NFE" << endl;
}
        airportName = airportArray[1];
        city =  airportArray[2] + airportArray[3];
        country = airportArray[4];
        IATAcode = airportArray[5];
        ICAOCode = airportArray[6];
        DST = airportArray[11];
        Tz = airportArray[12];
        type = airportArray[13];
        sourceOfData = airportArray[14];

    }else {
        try {
            airportid = stoi(airportArray[0]);
            latitude = stod(airportArray[6]);
            longitude = stod(airportArray[7]);
            altitude = stod(airportArray[8]);
            timezone = stod(airportArray[9]);

        } catch(exception &e) {
            //cout << "Number Format Exception" << endl;
            //System.out.println("NumberFormatException: " + nfe.getMessage());
        }
        airportName = airportArray[1];
        city = airportArray[2];
        country = airportArray[3];
        IATAcode = airportArray[4];
        ICAOCode = airportArray[5];
        DST = airportArray[10];
        Tz = airportArray[11];
        type = airportArray[12];
        sourceOfData = airportArray[13];
    }


    return {
            airportid, airportName, city, country, IATAcode,
            ICAOCode, latitude, longitude, altitude, timezone,
            DST, Tz, type, sourceOfData
    };

}




/**
     * the method takes a String array representation of the attributes
     * of an airline object, creates and returns an Airline object
     *
     * @param airlineArray
     * @return Airline object
     */

Airline CreatingObjects::createAirlineObject(vector<string> airlineArray) {
    int airlineid = 0;
    try{
        airlineid = stoi(airlineArray[0]);
    }catch(exception &e){
        cout << e.what() << endl;

    }
    string airlineName = airlineArray[1];
    string alias = airlineArray[2];
    string IATACode = airlineArray[3];
    string ICAOCode = airlineArray[4];
    string callSign = airlineArray[5];
    string country = airlineArray[6];
    string activeStatus = airlineArray[7];

    return Airline{
            airlineid, airlineName, alias, IATACode,
            ICAOCode, callSign, country, activeStatus
    };

}
/**
     * the method takes a String array representation of the attributes
     * of an route object, creates and returns an Route object
     *
     * @param routeArray
     * @return Route object
     */
    Route CreatingObjects::createRouteObject(vector<string> routeArray) {
        int airlineid = 0;
        int sourceAirportid = 0;
        int destinationAirportid = 0;
        int stops = 0;
        try{
            airlineid = stoi(routeArray[1]);
            sourceAirportid = stoi(routeArray[3]);
            destinationAirportid = stoi(routeArray[5]);
            stops = stoi(routeArray[7]);
        }catch (exception &e){
            cout << e.what() << endl;

        }
        string airlineCode = routeArray[0];
        string sourceAirportCode = routeArray[2];
        string destinationAirportCode = routeArray[4];
        string codeShare = routeArray[6];
        string equipment = routeArray[routeArray.size() - 1];

        return Route{
        airlineCode, airlineid, sourceAirportCode, sourceAirportid,
        destinationAirportCode, destinationAirportid, codeShare, stops, equipment
        };
}

