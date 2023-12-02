#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Passenger.h"
#include "Seat.h"

using namespace std;

class Flight{
public:
    Flight();
    Flight(int num_rows, int num_cols);
    void addPassenger(const Passenger& passenger);
    void removePassenger(const string& passengerID);
    Seat* getSeat(const string& seatNumber);
    void displaySeatMap() const;
    void sub_passenger();
    void add_passenger();
    void display_passenger();
    void clean_standard();
    void populate_passengers();

private:
    int num_rows;
    int num_cols;
    int num_pass;
    vector<Passenger> passengers;
    vector<vector<Seat>> seatMap;
};