#include <iostream>
using namespace std;

int main() {

	char input_tmp = 'a';

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> input_tmp;

	if (input_tmp == 'j' || input_tmp == 'J') 
	{
		cout << "Es handelt sich um eine Ja Eingabe." << endl;
	}
	else if (input_tmp == 'n' || input_tmp == 'N')
	{
		cout << "Es handelt sich um eine Nein Eingabe." << endl;
	}
	else
	{
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;
	}

	system("PAUSE");
	return 0;
}