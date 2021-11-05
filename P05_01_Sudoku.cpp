#include <iostream>
#include <string>
using namespace std;

int main() {

    //variables
    int zh = 0, linum = 9, numcompare = 9;
    int vartmp[5];

   for (zh = 0; zh < 5; zh++) {
       do {
           cout << "Bitte geben Sie die " << zh+1 << ". Zahl ein: ? ";
           cin >> vartmp[zh];
       } while (vartmp[zh] > 9 || vartmp[zh] < 1);
   }
    
    // print lines
    for ( int y = 0; y < 9; y++) {

        // print rows
        for (int x = 0; x < 6; x++) {

            //print line number if you come to first line
            if (x == 0) {
                cout << linum;
                linum--;
            } else {
                cout << ".";
            }

            // for (int numcheck = 0; numcheck < 5; numcheck++ ) {
            //     if (vartmp[numcheck] == numcompare - x) {
            //         cout << "+";
            //     } else {
            //         cout << ".";
            //     }
            // }
    
        } // end rows
        
        // break line after each row
        cout << "\n";

        // print last line with x-axis for graph legend
        if (y == 8) {
            cout << " 12345" << endl;
        }

    } // end lines

}
