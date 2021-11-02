#include <iostream>
using namespace std;

int main() {

    double temp_in = 0.0;
    const double temp_conv = 1.8;

    cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
    cin >> temp_in;
    cout << "Die Temperatur in Fahrenheit lautet: " << temp_in * temp_conv + 32 << endl;

    return 0;
}