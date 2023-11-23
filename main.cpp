#include <stdlib.h>
#include <iostream>
using namespace std;
#include "main.h"

int main()
{
    int choice = 1;
    while (choice != 0)
    {
        switch (menu()){
            case 1:
                flight_seat_map();
                Press_Enter();
                break;
            case 2:
                display_passenger();
                Press_Enter();
                break;
            case 3:
                add_passenger();
                Press_Enter();
                break;
            case 4:
                remove_passenger();
                Press_Enter();
                break;
            case 5:
                Press_Enter();
                break;
            case 6:
                choice = 0;
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
    cin >> choice;

    return choice;

}