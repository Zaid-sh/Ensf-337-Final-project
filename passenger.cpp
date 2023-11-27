#include "passenger.h"

Passenger::Passenger(): pID(0)
{
    string pFname;
    string pLname;
    string pPhone;
    Seat* pSeat = nullptr;
}

int Passenger::add_passenger ()
{
    Seat s;
	pSeat = &s;
    int row;
    char col;

    ofstream out("flight_info.txt", ios::app);
    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1); 
    }

    cout << "Please enter the passenger's id: " << endl;
    cin >> pID;
    cout << "Please enter the passenger's first name: " << endl;
    cin >> pFname;
    cout << "Please enter the passenger's last name: " << endl;
    cin >> pLname;
    cout << "Please enter the passenger's phone number: " << endl;
    cin >> pPhone;
    cout << " " << endl;
    cout << "Enter the passenger's desired row: " << endl;
    cin >> row;
    cout << "Enter the passenger's desired seat: " << endl;
    cin >> col;

    pSeat->set_Row(row);
    pSeat->set_Column(col);

    out << '\n' << left << setw(20) << pFname << setw(20) << pLname << setw(20) << pPhone << row << setw(1) << col << right << setw(6) << pID;

    out.close();

    return 0;
}