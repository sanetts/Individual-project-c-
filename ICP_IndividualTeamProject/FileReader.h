//
// Created by Morgan Sarpong on 24/11/2022.
//

#ifndef ICP_INDIVIDUALPROJECT_FILEREADER_H
#define ICP_INDIVIDUALPROJECT_FILEREADER_H

#include <string>
using namespace std;

vector<vector<string>> read(string filename);
vector<vector<std::string>> fileReader(const string& filename);
void writeTofile(string filename, string data);
#endif //ICP_INDIVIDUALPROJECT_FILEREADER_H
