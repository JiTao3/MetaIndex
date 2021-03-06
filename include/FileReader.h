#ifndef FILEREADER_H
#define FILEREADER_H
#include <vector>
#include <array>
#include <iterator>
#include <string>
#include <algorithm>
// #include <boost/algorithm/string.hpp>
using namespace std;

class FileReader
{
    string filename;
    string delimiter;

public:
    FileReader();
    FileReader(string, string);
    vector<vector<string>> get_data();
    vector<vector<string>> get_data(string);
    vector<vector<double>> get_points();
    // vector<Mbr> get_mbrs();
    vector<vector<double>> get_points(string filename, string delimiter);
    vector<array<double, 2>> get_array_points(string filename, string delimiter);


    vector<vector<double>> getRangePoints(string filename, string delimiter);
    
    // vector<Mbr> get_mbrs(string filename, string delimiter);
    vector<double> getModelParameter(string paramPath);
    vector<double> get_mapval(string filename, string delimiter);
};

#endif
