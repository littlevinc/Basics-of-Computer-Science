#include <iostream>
using namespace std;

int main() {

	char num1 = '0';
	char num2 = '0';

	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> num1;

	cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	cin >> num2;

	//use ascii values to determain if 'q' was entered 
	if (int(num1) == 113 || int(num2) == 113) {
		cout << "Das Programm wurde durch Eingabe von q beendet." << endl;
		system("PAUSE");
		return 1;
	}
	else {
		cout << int(num1)-48 << " + " << int(num2)-48 << " = " << (int(num1) - 48)+(int(num2) - 48) << endl;
		system("PAUSE");
		return 0;
	}


}