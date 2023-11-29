#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "seat.h"
#include <iomanip>

#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger{
    public:
    string get_Fname()const { return pFname; }
    string get_Lname()const { return pLname; }
    string get_Phone()const { return pPhone; }
    int get_ID()const { return pID; }
    void set_Fname(string Fname);
    void set_Lname(string Lname);
    void set_Phone(string Phone);
    void set_ID(int ID);
    void add_passenger();
    void sub_passenger();
    void display_passenger();
    void clean_standard();
    Passenger ();

    private:
    string pFname;
    string pLname;
    Seat* pSeat;
    string pPhone;
    int pID;
};

#endif