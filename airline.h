#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

#ifndef AIRLINE_H
#define AIRLINE_H

class Airline{
    public:
    string get_name()const { return aName; }
    int get_flight()const  { return aFlight; } //Do a for loop here
    int get_num_flight()const { return aNumFlight; }
    void set_name(string name) { name = aName; }
    void set_flight(int flight) { flight = aFlight; } //Do a for loop
    void set_num_flight(int flightNum) { flightNum = aNumFlight; }
    Airline (string name, vector flight, int num_flight);
    ~Airline();

    private:
    string aName;
    vector<Flight>aFlight;
    int aNumFlight;
};

#endif