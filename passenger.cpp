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

void Passenger::sub_passenger()
{
    ofstream out("flight_info.txt", ios::app);
    if (out.fail())
    {
        cout << "File could not be opened"<< endl;
        exit(1); 
    }

    cout << "Please enter the if of the passenger that needs to be removed: " << endl;
    cin >> pID;

    //while (!out.eof())
   
}

void Passenger::display_passenger()
{
    cout << setw(15) << left << "First Name"
            << setw(15) << left << "Last Name"
            << setw(15) << left << "Phone" 
            << setw(7) << left << "Row"
            << setw(10) << left << "Seat"
            << setw(10) << left << "ID"
            << endl;
    cout << setfill('-') << setw(65) << "" << setfill(' ') << endl;

    char s[21];
    ifstream in("flight_info.txt");
    if (in.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }

    do {
        in.get(s, 21, '\n');
        if (in.eof()) break;
        pFname = s;
        //pFname = trim_trailing_spaces(pFname);
    }while(1);
}
