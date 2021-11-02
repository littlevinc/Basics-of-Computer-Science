#include <iostream>
using namespace std;

int main() {

    double meter_in = 0.0;
    const double m_convert = 3.2808;

    cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
    cin >> meter_in;
    cout << "Die Laenge in Fuss lautet: " << meter_in * m_convert << endl;

    return 0;

}


