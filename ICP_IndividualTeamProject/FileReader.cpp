//
// Created by Sandra on 24/11/2022.
//

#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;
/**
 * reading each csv file into a vector to be returned
 * This is done by splitting the csv file using the comma as the delimiter
 * @param str
 * @param delim
 * @return
 */
vector<string> Split(const string& str, char delim) {
    vector<string> singles;
    string single;
    istringstream tokenStream(str);
    while(std::getline(tokenStream, single, delim)){
        singles.push_back((single));
    }
    return singles;

}


/**
 * this method reads from any file given the filename as parameter
 * @param filename
 * @return
 */
vector<vector<string>> read(string filename) {
    vector<vector<string>> stringVector;
    vector<string> row;
    string line, word, temp;

    fstream file;
    file.open(filename,ios::in);

    if (file.fail()) {
        cout << "Could not open the file " << filename << endl;
    }

    while (getline(file,line)){
        row.clear();
        stringstream s(line);

        while(getline(s, word, ',')){
            row.push_back(word);
        }
        stringVector.push_back(row);
    }
    file.close();
    return stringVector;

}

/**
 * this method writes to any file given the filename and data to be written as parameter
 * @param filename
 * @param data
 */
void writeTofile(string filename, string data){
    ofstream outputFile(filename);
    if (outputFile.fail()){
        cout << "Could not open " << filename << endl;
    }

    outputFile << data;
    outputFile.close();
}

