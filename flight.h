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
    int get_numrows(string file)const;
    int get_numcols(string file)const;
    void displaySeatMap(string file);
    void sub_passenger(string file);
    void add_passenger(string file);
    void display_passenger(string file);
    void clean_standard();
    void populate_passengers();
    int occupied(int i, int j);

private:
    int num_rows;
    int num_cols;
    int num_pass;
    vector<Passenger> passengers;

};
#endif