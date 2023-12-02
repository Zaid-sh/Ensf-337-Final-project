
#include "Flight.h"

Flight::Flight()
{
    num_rows = 0;
    num_cols = 0;
    num_pass = 0;
    passengers;
    seatMap;
}

void Flight::clean_standard()
{
    int leftover;
    do{
        leftover = cin.get();

    } while (leftover != '\n' && leftover != EOF);
}

Flight::Flight(int rows, int cols) : num_rows(rows), num_cols(cols) {
    seatMap.resize(num_rows, vector<Seat>(num_cols));
}

void Flight::addPassenger(const Passenger& passenger) {
    passengers.push_back(passenger);
}
#if 0
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

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            cout << seatMap[i][j].getSeatNumber() << " ";
        }
        cout << " ";
    }
}
#endif

void Flight::displaySeatMap() const
{

}

void Flight::add_passenger()
{
    string Fname, Lname, Phone;
    int row, ID;
    char col;

    ofstream out("flight_info.txt", ios::app);
    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1);
    }

    cout << "Please enter the passenger's id: " << endl;
    cin >> ID;
    clean_standard();
    cout << "Please enter the passenger's first name: " << endl;
    getline(cin, Fname);
    cout << "Please enter the passenger's last name: " << endl;
    getline(cin, Lname);
    cout << "Please enter the passenger's phone number: " << endl;
    getline(cin, Phone);
    cout << " " << endl;
    cout << "Enter the passenger's desired row: " << endl;
    cin >> row;
    cout << "Enter the passenger's desired seat: " << endl;
    cin >> col;
    clean_standard();

    out << '\n' << left << setw(20) << Fname << setw(20) << Lname << setw(20) << Phone << row << setw(1) << col << right << setw(6) << ID;

    passengers.push_back(Passenger(Fname, Lname, row, col, ID));

    out.close();
}
#if 0
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
#endif
void Flight::display_passenger()
{
    cout << setw(20) << left << "First Name"
            << setw(20) << left << "Last Name"
            << setw(20) << left << "Phone"
            << setw(7) << left << "Row"
            << setw(10) << left << "Seat"
            << setw(10) << left << "ID"
            << endl;
    cout << setfill('-') << setw(82) << "" << setfill(' ') << endl;

    char s[21];
    string Fname, Lname, phone;
    int row, ID, i = 0;
    char col;
    ifstream in("flight_info.txt");
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }
    in.getline(s,21);

    do {
        i++;
        switch (i){
            case 1:
                in.get(s, 21, '\n');
                Fname = s;
                break;

            case 2:
                in.get(s, 21, '\n');
                Lname = s;
                break;

            case 3:
                in.get(s, 21, '\n');
                phone = s;
                break;

            case 4:
                in >> row;
                break;

            case 5:
                in >> col;
                break;

            case 6:
                in >> ID;
                in.getline(s,21);
                break;

            case 7:
                cout << setw(15) << left << Fname
                        << setw(15) << left << Lname
                        << setw(15) << left << phone
                        << setw(7) << left << row
                        << setw(10) << left << col
                        << setw(10) << left << ID
                        << endl;
                cout << setfill('-') << setw(82) << "" << setfill(' ') << endl;
                i = 0;
                break;
        }

    }while( !in.eof() );

    in.close();
}

void Flight::populate_passengers()
{
    char s[21];
    string Fname, Lname, phone;
    int row, ID, i = 0;
    char col;
    ifstream in("flight_info.txt");
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }
    in.getline(s,21);

    do {
        i++;
        switch (i){
            case 1:
                in.get(s, 21, '\n');
                Fname = s;
                break;

            case 2:
                in.get(s, 21, '\n');
                Lname = s;
                break;

            case 3:
                in.get(s, 21, '\n');
                phone = s;
                break;

            case 4:
                in >> row;
                break;

            case 5:
                in >> col;
                break;

            case 6:
                in >> ID;
                in.getline(s,21);
                break;

            case 7:
                //passengers.push_back(Passenger(Fname, Lname, row, col, ID));
                i = 0;
                break;
        }

    }while( !in.eof() );
}
