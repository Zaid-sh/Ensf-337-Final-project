#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Passenger.h"
#include "Seat.h"

using namespace std;

class Flight{
public:
    Flight(int num_rows, int num_cols);
    void addPassenger(const Passenger& passenger);
    void removePassenger(const string& passengerID);
    Seat* getSeat(const string& seatNumber);
    void displaySeatMap() const;
    void sub_passenger();
    void add_passenger();

private:
    int num_rows;
    int num_cols;
    vector<Passenger> passengers;
    vector<vector<Seat>> seatMap;
};

Flight::Flight(int rows, int cols) : num_rows(rows), num_cols(cols) {
   
}

