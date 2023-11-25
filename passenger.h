#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "seat.h"

#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger{
    public:
    string get_Fname()const { return pFname; }
    string get_Lname()const { return pLname; }
    int get_Phone()const { return pPhone; }
    int get_ID()const { return pID; }
    int get_FID()const { return pFID; }
    void set_Fname(string Fname);
    void set_Lname(string Lname);
    void set_Phone(int Phone);
    void set_ID(int ID);
    void set_FID(int FID);
    int add_passenger(char* file);
    int sub_passenger(char* file);
    int display_passenger(char* file);

    private:
    string pFname;
    string pLname;
    Seat* pSeat;
    string pPhone;
    int pID;
    int pFID;
};

#endif