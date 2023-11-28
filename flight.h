#include <fstream>
#include <iostream>
#include <cstring>
#include <vector>
#include "passenger.h"
using namespace std;

#ifndef FLIGHT_H
#define FLIGHT_H

class Flight{
    public:

    private:
    int num_rows;
    int num_cols;
    vector<Passenger> Passengers;
    vector<vector<Seat>>seatmap;
};

#endif