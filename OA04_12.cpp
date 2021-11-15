#include <iostream>
#include <string>
using namespace std;

int main() {

    string eingabe = "";
    char converter[] = { 0 };
    
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin >> eingabe;

    for (int i = 0; i < eingabe.length(); i++)
        converter[i] = eingabe.at(i);

    return 0;
}
