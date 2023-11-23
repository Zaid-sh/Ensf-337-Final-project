#include "flight.h"

Flight :: populate_flight (char* file){
    ifstream in(file, ios::r);
    if (in.fail()){
        cout << "File could not be opened"<< endl;
        exit(1);
    }

}