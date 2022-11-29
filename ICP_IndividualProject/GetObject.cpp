//
// Created by Morgan Sarpong on 28/11/2022.
//

#include "GetObject.h"
#include "vector"
#include "FileReader.h"
#include "CreatingObjects.h"


vector<Airport> GetObject :: AirportObjects;

void GetObject :: the_main(){
    GetObject obj;
    string filePath = "/Users/sandra/Downloads/ICP_IndividualProject/cmake-build-debug/airports.csv";
    vector<vector<string>> AirportArray = fileReader(filePath);
    for(const vector<string>& array : AirportArray){
        Airport AirportObject = CreatingObjects::createAirportObject(array);
        GetObject::AirportObjects.push_back(AirportObject);
    }
}