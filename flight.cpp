<<<<<<< HEAD
#include "flight.h"

Flight :: populate_flight (char* file){
    ifstream in(file, ios::r);
    if (in.fail()){
        cout << "File could not be opened"<< endl;
        exit(1);
    }

}
=======

#include "Flight.h"


Flight::Flight(int rows, int cols) : num_rows(rows), num_cols(cols) {
    seatMap.resize(num_rows, vector<Seat>(num_cols));
}


void Flight::addPassenger(const Passenger& passenger) {
    passengers.push_back(passenger);
}


void Flight::removePassenger(const string& passengerID) {
    passengers.erase(std::remove_if(passengers.begin(), passengers.end(),
                                    [&](const Passenger& p) { return p.getID() == passengerID; }),
                     passengers.end());
}


Seat* Flight::getSeat(const string& seatNumber) {
    for (auto& row : seatMap) {
        for (Seat& seat : row) {
            if (seat.getSeatNumber() == seatNumber) {
                return &seat;
            }
        }
    }
    return nullptr; 
}


void Flight::displaySeatMap() const {
    for (const auto& row : seatMap) {
        for (const Seat& seat : row) {
            cout << (seat.isOccupied() ? "X" : "O") << " ";
        }
        cout << endl;
    }
}

>>>>>>> 6acee0e05e98bcc7f89fb2a2ae3ec1e77007e345
