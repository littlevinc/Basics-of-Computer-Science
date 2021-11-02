#include <iostream>
#include <string>
using namespace std;

// Vorlesung 5 Themen
// While-Schleife
// For-Schleife
// Do-While-Schleife

void MultWert() {

	string text = "Ein Text!";
	unsigned int pos = 0, pos1 = 0, pos2 = 0;

	for (pos1 = 0, pos2 = text.length() - 1; pos1 < text.length(); pos1++, pos2--)
	{
		cout << "Von Vorne: "
			<< "Position " << pos1 << " mit Buchstabe " << text.at(pos1)
			<< ". von hinten: "
			<< "Position " << pos2 << " mit Buchstabe " << text.at(pos2) << endl;
	}

}


int main() {

	string text = "Ein Text!";
	unsigned int pos = 0, pos1 = 0, pos2 = 0;
	int i = 0;

	//Durchlaufen eines Strings
	for (pos = 0; pos < text.length(); pos++) 
	{
		cout << "Buchstabe " << text.at(pos)
			<< " an Position " << pos << endl;
	}

	cout << "\n------------------\n";

	//Altersausgabe
	for (i = 1; i <= 19; i++) 
	{
		if(i == 1) 
		{
			cout << "Ich bin " << i << " Jahr Alt!" << endl;
		}
		else {
			cout << "Ich bin " << i << " Jahre Alt!" << endl;
		}
	}

	MultWert();


	system("PAUSE");
	return 0;
}