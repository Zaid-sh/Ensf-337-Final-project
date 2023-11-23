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