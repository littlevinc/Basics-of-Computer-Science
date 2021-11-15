#include <iostream>
#include <string>
using namespace std;

int main() {

	string eingabe = "";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);

	for (int i = 0; i < eingabe.length(); i++) {

		if (eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z')
		{
			cout << eingabe.at(i) << eingabe.at(i);
		}
		else if (eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
		{
			cout << eingabe.at(i) << eingabe.at(i) << eingabe.at(i);
		}
		else if (eingabe.at(i) >= '0' && eingabe.at(i) <= '9')
		{
			cout << ".";
		}
		else if (eingabe.at(i) == '!' || eingabe.at(i) == '?')
		{
			cout << "";
		}
		else if (eingabe.at(i) == ' ')
		{
			cout << "_";
		}
		else
		{
			cout << eingabe.at(i);
		}

	}

	system("PAUSE");
	return 0;

}