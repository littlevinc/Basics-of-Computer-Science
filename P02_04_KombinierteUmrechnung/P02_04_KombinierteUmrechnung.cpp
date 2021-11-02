#include <iostream>
using namespace std;

int main() {

    // options
    // celsius > fahrenheit
    // meter > fuß
    // Euro > US Dollar


    double value_in = 0.0;
    int auswahl = 0;

    //definde constants for calculation
    const double celsius = 1.8; // x * 1.8 + 32
    const double meter = 3.2808; // x * 3,2808
    const double euro = 1.2957; // x * 1.2957

    double farenheit = 0;
    double feet = 0;
    double dollar = 0;

    cout << "Ihre Eingabe: ? ";
    cin >> value_in;

    cout << "Ihre Auswahl der Umwandlung:\n"
        << "1 - Celsius in Fahrenheit\n"
        << "2 - Meter in Fuss\n"
        << "3 - Euro in US Dollar\n";

    // read choice of user
    cin >> auswahl;

    farenheit = ((3 - auswahl) * (2 - auswahl) * (value_in * celsius + 32)) / 2; //
    feet = ((1 - auswahl) * (3 - auswahl) * (value_in * meter));
    dollar = ((2 - auswahl) * (1 - auswahl) * (value_in * euro)) / 2;

    // print conversion
    cout << farenheit + feet + dollar;

}
