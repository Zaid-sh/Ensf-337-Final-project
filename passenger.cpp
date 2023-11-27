#include "passenger.h"

Passenger :: add_passenger (char* file){
    ofstream out(file, ios::app);
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
    cin >> pSeat -> sRow;
    cout << "Enter the passenger's desired seat: " << endl;
    cin >> pSeat -> sColumn;

    out << '\n' << left << setw(20) << pFname << setw(20) << pLname << setw(20) << pPhone << sRow << setw(1) << sColumn << right << setw(6) << pID;

    out.close();

    return 0;
}