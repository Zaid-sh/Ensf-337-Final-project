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