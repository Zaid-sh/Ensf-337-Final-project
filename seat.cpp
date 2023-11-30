#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
#include "seat.h"

Seat::Seat(int row, int column, bool occ, int PassID, int FID)
    : sRow(row), sColumn(column), sOcc(occ), sPassID(PassID), sFID(FID) {
    //Seat = new Seat;
}

Seat::Seat() {
    int* sRow = new int;
    int* sColumn = new int;
    sOcc = new bool;
    int* sPassID = new int;
    int* sFID = new int;
}
#if 0
Seat::~Seat() 
{
	delete Seat;
    delete sRow;
    delete sColumn;
    delete sOcc;
    delete sPassID;
    delete sFID;
}
#endif