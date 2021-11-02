#include <iostream>
using namespace std;

int main() {

    double eur_value = 0.0;
    const double eur_conver = 1.2957;

    cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
    cin >> eur_value;
    cout << "Die Geldmenge in US Dollar lautet: " << eur_value * eur_conver << endl;

    return 0; //programm was successful
}