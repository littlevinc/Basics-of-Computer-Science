#include <iostream>
using namespace std;

int main() {

	char char_tmp = 'a';

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> char_tmp;

	if(char_tmp >= 'a' && char_tmp <= 'z')
	{
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
	} else 
	{
		cout << "KEIN Kleinbuchstabe (a-z)." << endl;
	}

	system("PAUSE");
	return 0;
}