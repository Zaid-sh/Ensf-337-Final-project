#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;


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

    private:
    string pFname;
    string pLname;
    seat* pSeat;
    string pPhone;
    int pID;
    int pFID;
};