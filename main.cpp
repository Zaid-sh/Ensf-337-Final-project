#include <stdlib.h>
#include <iostream>
using namespace std;
#include "main.h"

Flight f;
Flight *p;


int main()
{
    string file = "flight_info.txt";
    intro();
    Press_Enter();
    p = &f;
    p->populate_passengers();
    int choice = 1;
    while (choice != 0)
    {
        switch (menu()){
            case 1:
                p->DisplaySeatMap(file);
                Press_Enter();
                break;
            case 2:
                p->display_passenger(file);
                Press_Enter();
                break;
            case 3:
                p->add_passenger(file);
                break;
            case 4:
                //p->sub_passenger(file);
                break;
            case 5:
                Press_Enter();
                break;
            case 6:
                choice = 0;
                cout << "Program terminated.";
                break;
        }
    }

    return 0;
}

int menu()
{
    int choice = -1;
    cout << "Please select one of the following options:" << endl;
    cout << "1. Display Flight Seat Map." << endl;
    cout << "2. Display Passengers Information." << endl;
    cout << "3. Add a New Passenger." << endl;
    cout << "4. Remove an Existing Passenger." << endl;
    cout << "5. Save Data." << endl;
    cout << "6. Quit." << endl;
    cout << endl;
    cout << "Enter your choice: (1, 2, 3, 4, 5, 6) " << endl;
    cin >> choice;

    return choice;
}

void Press_Enter()
{
    cout << "<<< Press Return to Continue >>>" << endl;
    string temp;
    p->clean_standard();
    getline(cin, temp);
}

void intro()
{
    cout << "Version: 1.0" << endl;
    cout << "Term Project - Flight Management Program in C++" << endl;
    cout << "Produced by: Mohammed Zaid Shaikh, Navjot Saroa, and Shaheer Shakir" << endl;
    cout << "Year: 2023" << endl;
    cout << endl;
}
