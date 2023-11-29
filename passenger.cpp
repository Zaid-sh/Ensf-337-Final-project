#include "passenger.h"

Passenger::Passenger(): pID(0)
{
    string pFname;
    string pLname;
    string pPhone;
    Seat* pSeat = nullptr;
}

void Passenger::clean_standard()
{
    int leftover;
    do{
        leftover = cin.get();

    } while (leftover != '\n' && leftover != EOF);
}

#if 0
void Passenger::add_passenger ()
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
    getline(cin, pFname);
    cout << "Please enter the passenger's last name: " << endl;
    getline(cin, pLname);
    cout << "Please enter the passenger's phone number: " << endl;
    getline(cin, pPhone);
    cout << " " << endl;
    cout << "Enter the passenger's desired row: " << endl;
    cin >> row;
    cout << "Enter the passenger's desired seat: " << endl;
    cin >> col;

    pSeat->set_Row(row);
    pSeat->set_Column(col);

    out << '\n' << left << setw(20) << pFname << setw(20) << pLname << setw(20) << pPhone << row << setw(1) << col << right << setw(6) << pID;

    out.close();

}
#endif

void Passenger::display_passenger()
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
    int row, ID, i = 0, j = 0;
    char col;
    ifstream in;
    in.open("flight_info.txt");
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }

    do {
        i++;
        j++;
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
       // Fname = trim_trailing_spaces(Fname);

    }while( !in.eof() );

    in.close();

}
