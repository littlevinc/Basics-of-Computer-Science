#include <iostream>
#include <string>
using namespace std;

int main() {

	unsigned int breite = 2;
	unsigned int hoehe = 2;

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> breite;

	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> hoehe;

	for (int h = 0; h < hoehe; h++) {
		for (int i = 0; i < h; i++) {
			cout << ".";
		}
		for (int b = 0; b < breite; b++) {
			if (h == 0 || h == (hoehe-1) || b == 0 || b == (breite-1)) {
				cout << "*";
			}
			else 
			{
				cout << "+";
			}
		}
		cout << "\n";
	}
	system("PAUSE");
	return 0;
}