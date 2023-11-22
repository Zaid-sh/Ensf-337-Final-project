#include <string>

#ifndef Project_class
#define Project_class


class Seat{
    public:
    int get_row()const;
    int get_column()const;
    bool get_occ()const;
    int get_PassID()const;
    int get_FID()const;
    void set_occ(bool occ);
    void set_PassID(int PassID);
    void set_FID(int FID);
    void set_row(int r);
    void set_column(int c);
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
    string get_Fname()const;
    string get_Lname()const;
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
}
