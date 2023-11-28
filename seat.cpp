#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
#include "seat.h"

Seat::Seat(int row, int column, bool occ, int PassID, int FID)
    : sRow(row), sColumn(column), sOcc(occ), sPassID(PassID), sFID(FID) {
    seat = new Seat;
}

Seat::Seat() {
    sRow = new int;
    sColumn = new int;
    sOcc = new bool;
    sPassID = new int;
    sFID = new int;
}

Seat::~Seat() {
        delete sRow;
        delete sColumn;
        delete sOcc;
        delete sPassID;
        delete sFID;
    }