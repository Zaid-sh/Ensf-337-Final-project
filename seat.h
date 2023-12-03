#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

#ifndef SEAT_H
#define SEAT_H

class Seat{
    public:
    int get_Row()const { return sRow; }
    int get_Column()const  { return sColumn; }
    bool get_Occ()const { return sOcc; }
    int get_PassID()const { return sPassID; }
    void set_Occ(bool occN) { sOcc = occN; }
    void set_PassID(int PassIDN) { sPassID = PassIDN; }
    void set_Row(int rowN) { sRow = rowN; }
    void set_Column(int colN) { sColumn = colN; }
    Seat();
    Seat (int row, int column, bool occ, int PassID);


    private:
    int sRow;
    int sColumn;
    bool sOcc;
    int sPassID;
};

#endif