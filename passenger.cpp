#include "passenger.h"

Passenger::Passenger(): pID(0)
{
    string pFname;
    string pLname;
    string pPhone;
    Seat* pSeat = nullptr;
}

void Passenger::set_pSeat(int prow, char pcol, bool pOcc)
{
    pSeat->set_Row(prow);
    pSeat->set_Column(pcol);
    pSeat->set_Occ(pOcc);
}

Passenger::Passenger(string Fname, string Lname, int row, char col, int ID)
{
    pFname = Fname;
    pLname = Lname;
    pSeat -> set_Row(row);
    pSeat -> set_Column(col);
    pID = ID;
}