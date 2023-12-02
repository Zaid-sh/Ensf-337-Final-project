#include "passenger.h"

Passenger::Passenger()
{
    pID = 0;
    pFname = "";
    pLname = "";
    pPhone = "";
    pSeat = nullptr;
}

void Passenger::set_pSeat(int prow, char pcol, bool pOcc, int ID)
{
    if (pSeat == nullptr) {
        pSeat = new Seat();
    }
    pSeat->set_Row(prow);
    pSeat->set_Column(pcol);
    pSeat->set_Occ(pOcc);
    pSeat->set_PassID(ID);
}

Passenger::Passenger(string Fname, string Lname, string Phone, int ID)
{
    pFname = Fname;
    pLname = Lname;
    pPhone = Phone;
    pID = ID;
    pSeat = nullptr;
}

int Passenger::get_pSeatcol()const
{
    char letter = pSeat->get_Column();
    int num = letter - 65;
    return num;
}