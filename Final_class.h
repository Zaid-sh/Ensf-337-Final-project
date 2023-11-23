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
    void set_occ(bool occN) { occ = occN; }
    void set_PassID(int PassIDN) { PassID = PassIDN; }
    void set_FID(int FIDN) { FID = FIDN; }
    void set_row(int rowN) { row = rowN; }
    void set_column(int colN) { column = colN; }
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
    seat* seat;
    string Phone;
    int ID;
    int FID;
};

class Flight{
    public:

    private:
    int num_rows;
    int num_cols;
    vector<Passenger> Passengers;
    vector<vector<seat>seatmap>;
};

#endif