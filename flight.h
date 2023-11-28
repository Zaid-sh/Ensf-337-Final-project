#include <fstream>
#include <iostream>
<<<<<<< HEAD
#include <cstring>
#include <vector>
#include "passenger.h"
using namespace std;

#ifndef FLIGHT_H
#define FLIGHT_H

=======
#include <vector>
#include <string>
#include "Passenger.h"
#include "Seat.h"

using namespace std;

>>>>>>> 6acee0e05e98bcc7f89fb2a2ae3ec1e77007e345
class Flight{
public:
    Flight(int num_rows, int num_cols);
    void addPassenger(const Passenger& passenger);
    void removePassenger(const string& passengerID);
    Seat* getSeat(const string& seatNumber);
    void displaySeatMap() const;
    

private:
    int num_rows;
    int num_cols;
<<<<<<< HEAD
    vector<Passenger> Passengers;
    vector<vector<Seat>>seatmap;
};

#endif
=======
    vector<Passenger> passengers;
    vector<vector<Seat>> seatMap;
};

Flight::Flight(int rows, int cols) : num_rows(rows), num_cols(cols) {
   
}

>>>>>>> 6acee0e05e98bcc7f89fb2a2ae3ec1e77007e345
