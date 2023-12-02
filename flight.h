#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "passenger.h"
#include "seat.h"

using namespace std;

#ifndef FLIGHT_H
#define FLIGHT_H

class Flight{
public:
    Flight();
    Flight(int num_rows, int num_cols);
    Seat* getSeat(const string& seatNumber);
    void displaySeatMap() const;
    void sub_passenger(string file);
    void add_passenger(string file);
    void display_passenger(string file);
    void clean_standard();
    void populate_passengers();

private:
    int num_rows;
    int num_cols;
    int num_pass;
    vector<Passenger> passengers;
    vector<vector<Seat>> seatMap;
};
#endif