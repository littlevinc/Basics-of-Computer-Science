#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int s)
{
	string result = "";

	for (int i = 0; i < text.length(); i++)
	{
		if (isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);

		else if (islower(text[i]))
			result += char(int(text[i] + s - 97) % 26 + 97);

		else
			result += text[i];
	}

	return result;
}


int main() {

	string text = "";
	unsigned int v = 0;

	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, text);

	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	cout << encrypt(text, v) << endl;

	system("PAUSE");
	return 0;
}