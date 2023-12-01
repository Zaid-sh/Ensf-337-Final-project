
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

    ifstearm in ("flight_info.txt");
    ofstream out("temp.txt", ofstream::out);

    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1); 
    }

    if (in.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1); 
    }

    out.open("temp.txt", ofstream::out);

    cout << "Please enter the ID of the passenger that needs to be removed: " << endl;
    cin >> pID;

    char c;
    int removeID = stoi(pID);
    vector<Passenger> tempVector = new Passenger[Passengers.size() - 1];
    for (int i = 0; i < Passengers.size(); i++) {
        if (Passengers[i].pID == removeID) {
            Passengers[i].pSeat->sOcc = 0;
            Passengers.erase(i);
        }
        else {
            while (in.get(c)) {
                out << c; 
            }
            tempVector.push_back(Passengers[i]);
        }
    }

    Passengers.clear();
    Passengers.resize(Passengers.size() - 1);
    for (int j = 0; j < Passengers.size(); j++){
        Passengers.push_back(tempVector[j]);
    }

    out.close();
    in.close();
    remove("flight_info.txt");
    rename("temp.txt", "flight_info.txt");
   
}

