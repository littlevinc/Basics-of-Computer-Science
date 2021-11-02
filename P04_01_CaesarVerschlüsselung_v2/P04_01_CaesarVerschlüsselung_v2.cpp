#include <iostream>
#include <string>
using namespace std;

int main() {

	string text = "";
	unsigned int v = 0;

	cout << "Geben sie den Text ein: ";
	getline(cin, text);

	cout << "Geben sie die Verschiebung ein: ";
	cin >> v;

	for (int i = 0; i < text.length(); i++)
	{
		if ('a' <= text.at(i) && text.at(i) <= 'z') {
			cout << char((int(text.at(i) + v) - 97) % 26 + 97);
		} 
		else if ('A' <= text.at(i) && text.at(i) <= 'Z')
		{
			cout << char((int(text.at(i) + v) - 65) % 26 + 65);
		} else {
			cout << text.at(i);
		}
	}
	system("\nPAUSE");
	return 0;
}