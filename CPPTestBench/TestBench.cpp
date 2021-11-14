#include <iostream>
#include <string>
using namespace std;

void wortspiegel(string text, int pos) {

	int pos_var = pos;
	string text_var = text, ausgabe = "";

	if (text_var.at(pos) != ' ') {

		do {
			pos_var++;
		} while (pos_var < text_var.length() && text_var.at(pos_var) != ' ' && text_var.at(pos_var) != '.');

		pos_var -= 1;
		ausgabe += text_var.at(pos_var);

		while (text_var.at(pos_var) != ' ' && pos_var > 0) {
			--pos_var;
			ausgabe += text_var.at(pos_var);
		}


		for (int z = 0; z < ausgabe.length(); z++) {
			text.at(pos_var) = ausgabe.at(z);
			pos_var++;
		}
				



		text = text_var;

		cout << ausgabe << endl;
		cout << text << endl;

	}
}

int main()
{
	// Aufruf der Unit Tests ...
	// Catch::Session().run();

	string text = "";
	int xpos = 0;
	char eingabe = ' ';
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);

	while (true) {

		// print out the text on the screen
		cout << text << endl;

		// positioning of the pointer
		for (int x = 0; x < xpos; x++) {
			cout << " ";
		}

		cout << "*" << endl;

		cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ? ";
		cin >> eingabe;

		if (eingabe == 'l') {
			xpos -= 1;
		}
		else if (eingabe == 'r')
		{
			xpos += 1;
		}
		else if (eingabe == 's')
		{
			wortspiegel(text, xpos);
		}
		else if (eingabe == 'q')
		{
			break;
		}

	}

	system("PAUSE");
	return 0;

}