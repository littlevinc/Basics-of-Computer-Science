#include <iostream>
#include <string>
using namespace std;

int main() {

    //variables
    int zh = 0;
    int vartmp[5];

   for (zh = 0; zh < 5; zh++) {
       do {
           cout << "Bitte geben Sie die " << zh+1 << ". Zahl ein: ? ";
           cin >> vartmp[zh];
       } while (vartmp[zh] > 9 || vartmp[zh] < 1);
   }

    for (int i = 0; i < 5; i++)
        cout << vartmp[i] << endl;

    return 0;

}
