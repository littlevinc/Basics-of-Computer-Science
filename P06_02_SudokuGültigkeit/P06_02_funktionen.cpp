#include <iostream>
#include <string>
#include "sudokufunktionen.h"
using namespace std;

const int sudoku_groesse = 9;
const int eingabe_groesse = 11;


/*
.1.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.9


.1.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.9

.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1
*/


bool pruefe_spalten(int sudoku[][sudoku_groesse])
{

    bool returnbool = true;

    for (int x = 0; x < 9; x++) {

        int result[9] = { 0 };

        for (int y = 0; y < 9; y++) {
            result[sudoku[y][x]-1]++;
        }

        for (int i = 0; i < 9; i++) {
            if (result[i] == 0) {
                cout << "Spalte " << x << ": Zahl " << i+1 << " kommt nicht vor." << endl;
                returnbool = false;
            }
            else if (result[i] > 1) {
                cout << "Spalte " << x << ": Zahl " << i + 1 << " kommt mehrfach vor." << endl;
                returnbool = false;
            }
        }
    }
    return returnbool;
}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
    bool returnbool = true;
    int result[9] = { 0 };

    for (int y = 0; y < 9; y++) {

        for (int x = 0; x < 9; x++) {
            result[sudoku[y][x]-1]++;
        }

        for (int i = 0; i < 9; i++) {
            if (result[i] == 0) {
                cout << "Zeile " << y << ": Zahl " << i + 1 << " kommt nicht vor." << endl;
                returnbool = false;
            }
            else if (result[i] > 1) {
                cout << "Zeile " << y << ": Zahl " << i + 1 << " kommt mehrfach vor." << endl;
                returnbool = false;
            }
        }

        for (int arr = 0; arr < 9; arr++)
            result[arr] = 0;

    }
    return returnbool;
}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
    bool returnbool = true;
    int result[9] = { 0,0,0,0,0,0,0,0,0 };

    int zeile = 0;
    int spalte = 0;

    for (int block = 0; block < 9; block++)
    {
        for (int z = 0; z < 3; z++)
        {
            for (int s = 0; s < 3; s++)
            {
                zeile = (block / 3 * 3) + z;
                spalte = (block % 3 * 3) + s;
                result[sudoku[zeile][spalte] - 1]++;
            }
        }

        for (int i = 0; i < 9; i++) {
            if (result[i] == 0) {
                cout << "Block " << block << ": Zahl " << i + 1 << " kommt nicht vor." << endl;
                returnbool = false;
            }
            else if (result[i] > 1) {
                cout << "Block " << block << ": Zahl " << i + 1 << " kommt mehrfach vor." << endl;
                returnbool = false;
            }
        }

        // reset array
        for (int arr = 0; arr < 9; arr++)
            result[arr] = 0;
    }

    return returnbool;

}

void konvertiere(string eingabe[], int sudoku[][sudoku_groesse])
{

    int countr = 0, countc = 0;

    for (int y = 0; y < 11; y++) {

        for (int x = 0; x < eingabe[0].length(); x++) {

            if (eingabe[y].at(x) >= '1' && eingabe[y].at(x) <= '9') {
                sudoku[countr][countc] = int(eingabe[y].at(x)) - 48;
                countc++;
            }

        }

        if (y == 2 || y == 6)
            y++;

        countr++; 
        countc = 0; 

    }

}