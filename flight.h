#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

#ifndef FLIGHT_H
#define FLIGHT_H

class Flight{
    public:

    private:
    int num_rows;
    int num_cols;
    vector<Passenger> Passengers;
    vector<vector<seat>seatmap>;
};

#endif