#include <iostream>
using namespace std;

int main() {

    //variables
    int date1_y = 0;
    int date1_m = 0;
    int date1_d = 0;
    int date2_y = 0;
    int date2_m = 0;
    int date2_d = 0;

    //userinput date1
    cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
    cin >> date1_d;

    cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
    cin >> date1_m;

    cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
    cin >> date1_y;

    //userinput date2
    cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
    cin >> date2_d;

    cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
    cin >> date2_m;

    cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
    cin >> date2_y;

    // start comparing
    if (date1_d == date2_d) // days
    {
        if (date1_m == date2_m) // months
        {
            if (date1_y == date2_y) // years
            {
                cout << "Beide Datumsangaben sind gleich." << endl;
            }
            else if (date1_y > date2_y) 
            {
                cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
            }
            else
            {
                cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
            } // end years
        } 
        else if (date1_m > date2_m)
        {
            cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
        }
        else
        {
            cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
        } // end months
    }
    else if (date1_d > date2_d)
    {
        cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
    }
    else
    {
        cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
    } // end days
  


    return 0;
}