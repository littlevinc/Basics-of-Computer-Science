#include <iostream>
using namespace std;

int main() {

	char letter_tmp = 'a';
	int con_tmp = 0;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> letter_tmp;

	if (letter_tmp == 'e') 
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	} 
	else if ('0' <= letter_tmp && letter_tmp <= '9')
	{
		con_tmp = (int(letter_tmp) - 48) + 5;
		cout << letter_tmp << " + " << 5 << " = " << con_tmp << endl;
	}
	else 
	{
		cout << "Weder 'e' noch Ziffer" << endl;
	}



	system("PAUSE");
	return 0;

}