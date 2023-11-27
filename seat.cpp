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
    sRow = -1;
    sColumn = -1;
    sOcc = 0;
    sPassID = -1;
    sFID = -1;
}

Seat::~Seat() {
        delete seat;
    }