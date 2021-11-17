#include <iostream>
#include <string>
using namespace std;

void wortspiegel(string& text, int pos) {

	int posmark = pos;
	string wortback = "";
	cout << text.length() << endl;

	// find the position of the last letter from the selected word
	for (int i = pos; i < text.length(); i++) {
		if ((i + 2) > text.length() || text.at(i + 1) == ' ' || text.at(i + 1) == '.') {
			posmark = i; // safe the position 
			break;	// break from loop
		}
	}

	cout << "Start Position: " << text.at(posmark) << endl;

	// store backward word in variable
	for (int i = posmark; i >= 0; i--) {

		cout << i << endl;
		wortback += text.at(i); // write word backwards into string

		// memory error detection
		if (i == 0 || text.at(i - 1) == ' ' || text.at(i - 1) == '.') {
			break;
		}
	}

	cout << "POSITION FOR BACKWARDS START " << posmark << endl;
	cout << wortback.length() << wortback << "Test" << endl;

	for (int ex = wortback.length(); ex > 0; ex--) {
		text.at(posmark) = wortback.at(ex - 1);
		posmark--;
	}

	cout << text;

}

int main()
{

	int position = 0;
	string text = "";
	cout << "Bitte geben Sie den Text ein: ";
	getline(cin, text);
	cout << "Geben sie die Position ein: ";
	cin >> position;


	// unveränderter text
	//cout << text << endl;

	wortspiegel(text, position);

	// veränderter text
	//cout << text; 

}