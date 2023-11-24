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
    int get_FID()const { return sFID; }
    void set_Occ(bool occN) { sOcc = occN; }
    void set_PassID(int PassIDN) { sPassID = PassIDN; }
    void set_FID(int FIDN) { sFID = FIDN; }
    void set_Row(int rowN) { sRow = rowN; }
    void set_Column(int colN) { sColumn = colN; }
    Seat (int row, int column, bool occ, int PassID, int FID);
    ~Seat();

    private:
    int sRow;
    int sColumn;
    bool sOcc;
    int sPassID;
    int sFID;
};

#endif