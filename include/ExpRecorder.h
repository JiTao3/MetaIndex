#pragma once
#include <chrono>
#include <iostream>

using namespace std;

class ExpRecorder
{
private:
    /* data */
public:
    long pointSearchTime = 0;
    long pointTreeTravelTime = 0;
    long pointModelPreTime = 0;
    long pointBindarySearchTime = 0;

    int rangeQuerySize = 1;
    long rangeTotalTime = 0;
    long rangeLookUpTime = 0;
    long rangeRefinementTime = 0;
    long rangeScanTime = 0;

    double knnRangeQueryConterAvg = 0.0;

    void printRangeQuery(int);
    void cleanRangeQuery();

    ExpRecorder(/* args */);
    ~ExpRecorder();
};

