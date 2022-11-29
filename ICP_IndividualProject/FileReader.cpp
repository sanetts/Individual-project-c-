//
// Created by Sandra on 24/11/2022.
//

#include "FileReader.h"
#include<iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;
vector<string> Split(const string& str, char delim) {
    vector<string> singles;
    string single;
    istringstream tokenStream(str);
    while(std::getline(tokenStream, single, delim)){
        singles.push_back((single));
    }
    return singles;

}


vector<vector<std::string>> fileReader(const string& filename) {

        ifstream inputFile;
        inputFile.open(filename);
        vector<string> ObjectArray;
    vector<vector<string>> bunch_of_rows;

        if(inputFile.fail()){
            cerr<<"Sorry I can't open the file"<<filename<<endl;
        }

    while (inputFile.peek()!=EOF) {
        string line;
        getline(inputFile,line,'\n');

        ObjectArray.push_back(line);
    }
    for (const string& content: ObjectArray) {
        bunch_of_rows.push_back(Split(content,','));
//        std::cout << route << endl;
    }
    inputFile.close();

    return bunch_of_rows;
}

