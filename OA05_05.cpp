#include <iostream>
#include <string>
using namespace std;

int main () {

    // variables
    int eingabe[9] = { 0 }, auswertung[9] = { 0 }, result = 0;;
    
    // get user input
    for (int i = 0; i < 9; i++) {
        do {

            cout << "Bitte Geben sie die " << i + 1 << ". Zahl ein: ? ";
            cin >> eingabe[i];
        } while ( eingabe[i] <= 0 || eingabe[i] > 6);
        auswertung[eingabe[i]]++;
    }

    for (int x = 1; x < 7; x++) {
        if(auswertung[x] > 0) {
            result++;
        }
    } 

    cout << "In der Eingabe kamen " <<  result << " unterschiedliche Zahlen vor.";


}