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
    Passenger();
    Passenger(string Fname, string Lname, string Phone, int ID);
    string get_Fname()const { return pFname; };
    string get_Lname()const { return pLname; };
    string get_Phone()const { return pPhone; };
    int get_ID()const { return pID; };
    int get_pSeatrow()const { return pSeat->get_Row(); };
    int get_pSeatcol()const;
    int get_pSeatocc()const { return pSeat->get_Occ(); };
    void set_Fname(string Fname) { pFname = Fname; };
    void set_Lname(string Lname) { pLname = Lname; };
    void set_Phone(string Phone) { pPhone = Phone; };
    void set_ID(int ID) { pID = ID; };
    void set_pSeat (int prow, char pcol, bool pOcc, int ID);

    private:
    string pFname;
    string pLname;
    Seat* pSeat;
    string pPhone;
    int pID;
};

#endif