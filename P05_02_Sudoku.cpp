#include <iostream>
#include <string>
using namespace std;

/*
.9.4.6.|.3.1.8.|.2.7.5
.1.2.3.|.7.5.6.|.9.4.8
.5.8.7.|.2.4.9.|.6.3.1
-------|-------|-------
.8.1.4.|.9.2.5.|.7.6.3
.2.7.5.|.1.6.3.|.8.9.4
.6.3.9.|.8.7.4.|.1.5.2
-------|-------|-------
.3.6.8.|.5.9.2.|.4.1.7
.4.5.1.|.6.8.7.|.3.2.9
.7.9.2.|.4.3.1.|.5.8.6

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

// 1 <<>> ASCII 49
// 9 <<>> ASCII 57


int main() {

    int sudoku[9][9] = { 0 }, countc = 0, rowdiff = 0, countr = 0;
    string eingabe[11] = { "" };

    cout << "Bitte geben Sie das Sudoku ein:" << endl;

    for (int i = 0; i < 11; i++)
        cin >> eingabe[i];

    for (int y = 0; y < 11; y++) {

        for (int x = 0; x < eingabe[0].length(); x++) {


            if (eingabe[y].at(x) >= '1' && eingabe[y].at(x) <= '9') {
                sudoku[countr][countc] = int(eingabe[y].at(x)) - 48;
                countc++;
            }
           
        }

        // jump over lines that do not have numbers in them
        if (y == 2 || y == 6)
            y++;

        countr++; // jump to next row
        countc = 0; // reset count in row

    }

    // print new version with different signs
    for (int rowy = 0; rowy < 9; rowy++) {

        for (int columnx = 0; columnx < 9; columnx++) {
            cout << ";" << sudoku[rowy][columnx];
            if (columnx == 2 || columnx == 5)
                cout << ";//";
        }
        cout << "\n";

        if (rowy == 2 || rowy == 5) // skip special rows
            cout << "=======//=======//=======" << endl;
    }

    system("PAUSE");
    return 0;
}