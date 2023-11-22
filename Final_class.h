#include <string>

#ifndef Project_class
#define Project_class


class Seat{
    public:
    int get_row()const { return row; }
    int get_column()const  { return column; }
    bool get_occ()const { return occ; }
    int get_PassID()const { return PassID; }
    int get_FID()const { return FID; }
    void set_occ(bool occ);
    void set_PassID(int PassID);
    void set_FID(int FID);
    void set_row(int rowN);
    void set_column(int colN);
    Seat (int row, int column, bool occ, int PassID, int FID);
    ~Seat();

    private:
    int row;
    int column;
    bool occ;
    int PassID;
    int FID;
};

class Passenger{
    public:
    string get_Fname()const { return Fname; }
    string get_Lname()const { return Lname; }
    int get_Phone()const { return Phone; }
    int get_ID()const { return ID; }
    int get_FID()const { return FID; }
    void set_Fname(string Fname);
    void set_Lname(string Lname);
    void set_Phone(int Phone);
    void set_ID(int ID);
    void set_FID(int FID);

    private:
    string Fname;
    string Lname;
    int Phone;
    int ID;
    int FID;
};

#endif