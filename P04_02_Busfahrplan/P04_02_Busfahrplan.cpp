#include <iostream>
#include <string>
using namespace std;

int main() {

	int tstunden = -1, tminuten = -1, ttakt = 0;

	do {
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> tstunden;
	} while (0 > tstunden || tstunden >= 24);

	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> tminuten;
	} while (0 > tminuten || tminuten >= 60);

	cout << "Der erste Bus faehrt also um " << tstunden << ":" << tminuten << " Uhr." << endl;
	
	do {
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> ttakt;

	} while (ttakt <= 0 || ttakt > 180);

	int newhour = tstunden;
	int newmin = tminuten;
	int difmin = ttakt % 60;
	int difhou = ttakt / 60;

	while (newhour < 24) {
			
		cout << newhour << ":" << newmin << " ";

		newhour += difhou;

		if (difhou > 0) {
			cout << "\n";
		}

		if ((difmin + newmin) >= 60) {
			newhour++;
			if(difhou == 0) {
				cout << "\n";
			}
		}

		newmin = (difmin + newmin) % 60;
	}

	return 0;
}