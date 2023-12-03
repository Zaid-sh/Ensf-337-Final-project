
#include "flight.h"

Flight::Flight()
{
    num_rows = 0;
    num_cols = 0;
    num_pass = 0;
    passengers;
}

void Flight::clean_standard()
{
    int leftover;
    do{
        leftover = cin.get();

    } while (leftover != '\n' && leftover != EOF);
}

int Flight::get_numrows(string file)const
{
    char s[8];
    int row;
    ifstream in(file);
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }

    in.get(s, 8, '\n');
    in >> row;

    return row;
}

int Flight::get_numcols(string file)const
{
    char s[14];
    int col;
    ifstream in(file);
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }

    in.get(s, 14, '\n');
    in >> col;

    return col;
}

int Flight::occupied(int i, int j)
{
    for (const Passenger& passenger : passengers)
    {
        if ((i + 1) == passenger.get_pSeatrow() && j == passenger.get_pSeatcol())
            if (passenger.get_pSeatocc() == true)
                return 0;
            else
                return 1;
    }
}

void Flight::DisplaySeatMap(string file)
{
    int j = 0;
    cout << "     ";
    for (int i = 0; i < get_numcols(file); ++i) {cout << (char)(i + 65) << "   ";}
    cout << endl;
    for (int i = 0; i< get_numrows(file); i++) {
      cout << "   ";
      for (int j = 0; j < get_numcols(file); ++j) { cout << "+---";}
      cout << "+"<<endl;

      for (j = 0; j < get_numcols(file); ++j) {
        if (j == 0)
            if (i < 9)
                cout << i + 1 <<"  |";
            else
                cout << i + 1 <<" |";

        if ( occupied(i, j) ) {
          cout << "   |";
        }
        else {
          cout << " X |";
        }
      }
      cout << endl;

    }
    cout << "   ";
    for (int j1 = 0; j1 < get_numcols(file); ++j1) {cout << "+---";}
    cout << "+"<<endl;
}



void Flight::add_passenger(string file)
{
    string Fname, Lname, Phone;
    int row, ID;
    char col;

    ofstream out(file, ios::app);
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

    num_pass++;
    Passenger newPassenger(Fname, Lname, Phone, ID);
    newPassenger.set_pSeat(row, col, 1, ID);
    passengers.push_back(newPassenger);

    out.close();
}
#if 0
void Flight::sub_passenger(string file)
{
    int ID;

    ofstream out(file, ios::app);
    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1);
    }

    cout << "Please enter the ID of the passenger that needs to be removed: " << endl;
    cin >> ID;

    int removeID = stoi(ID);
    tempVector = new Passenger[passengers.size() - 1];
    for (int i = 0; i < passengers.size(); i++) {
        if (passengers[i].pID == removeID) {
            passengers[i].pSeat->sOcc = 0;
            passengers.erase(i);
        }
        else {
            tempVector.push_back(passengers[i]);
        }
    }

    passengers.clear();
    Passengers.resize(Passengers.size() - 1);
    for (int j = 0; j < Passengers.size(); j++){
        Passengers.push_back(tempVector[j]);
    }

}
#endif
void Flight::display_passenger(string file)
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
    string dFname, dLname, dphone;
    int row, ID, i = 0, j = 0;
    char col;
    ifstream in(file);
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
                dFname = s;
                break;

            case 2:
                in.get(s, 21, '\n');
                dLname = s;
                break;

            case 3:
                in.get(s, 21, '\n');
                dphone = s;
                break;

            case 4:
                in >> row;
                break;

            case 5:
                in >> col;
                break;

            case 6:
                in >> ID;
                break;

            case 7:
                cout << setw(15) << left << dFname
                        << setw(15) << left << dLname
                        << setw(15) << left << dphone
                        << setw(7) << left << row
                        << setw(10) << left << col
                        << setw(10) << left << ID
                        << endl;
                cout << setfill('-') << setw(82) << "" << setfill(' ') << endl;
                i = 0;
                j++;
                in.getline(s,21);
                break;
        }

    }while( in );

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
                break;

            case 7:
                num_pass++;
                Passenger newPassenger(Fname, Lname, phone, ID);
                newPassenger.set_pSeat(row, col, 1, ID);
                passengers.push_back(newPassenger);
                i = 0;
                in.getline(s, 21);
                break;
        }

    }while( in );
}
