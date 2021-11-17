#include <iostream>
#include <string>
#include "sudokufunktionen.h"
using namespace std;

const int sudoku_groesse = 9;



int main()
{
    int sudoku[9][9] = { 0 };
    string eingabe[11];

    cout << "Bitte geben Sie das Sudoku ein:" << endl;
    for (int i = 0; i < 11; i++)
        getline(cin, eingabe[i]);

    konvertiere(eingabe, sudoku);

    


    
    bool ps = pruefe_spalten(sudoku);
    bool pz = pruefe_zeilen(sudoku);
    bool pb = pruefe_bloecke(sudoku);

    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;

    

    system("PAUSE");
    return 0;
}
