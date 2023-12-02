#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
#include "seat.h"

Seat::Seat(int row, int column, bool occ, int PassID)
    : sRow(row), sColumn(column), sOcc(occ), sPassID(PassID) {
}

Seat::Seat() : sRow(0), sColumn(0), sOcc(false), sPassID(0) {

}
