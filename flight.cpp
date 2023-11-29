
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


void Flight::sub_passenger()
{
    ofstream out("flight_info.txt", ios::app);
    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1); 
    }

    cout << "Please enter the ID of the passenger that needs to be removed: " << endl;
    cin >> pID;

    removeID = stoi(pID);
    tempVector = new Passenger[Passengers.size() - 1];
    for (int i = 0; i < Passengers.size(); i++) {
        if (Passengers[i].pID == removeID) {
            Passengers[i].pSeat->sOcc = 0;
            Passengers.erase(i);
        }
        else {
            tempVector.push_back(Passengers[i]);
        }
    }

    Passengers.clear();
    Passengers.resize(Passengers.size() - 1);
    for (int j = 0; j < Passengers.size(); j++){
        Passengers.push_back(tempVector[j]);
    }
   
}

