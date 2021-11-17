#include <iostream>
#include <string>
#include "wortfunktionen.h"
using namespace std;

void wortspiegel(string& text, int pos) {

	int posmark = pos;
	string wortback = "";

	if (text.at(pos) != ' ' && text.at(pos) != '.') {

		// find the position of the last letter from the selected word
		for (int i = pos; i < text.length(); i++) {
			if ((i + 2) > text.length() || text.at(i + 1) == ' ' || text.at(i + 1) == '.') {
				posmark = i; // safe the position 
				break;	// break from loop
			}
		}

		// store backward word in variable
		for (int i = posmark; i >= 0; i--) {

			wortback += text.at(i); // write word backwards into string

			// memory error detection
			if (i == 0 || text.at(i - 1) == ' ' || text.at(i - 1) == '.') {
				break;
			}
		}
	
		// insert mirrored word starting from the back of the original word in the string
		for (int ex = wortback.length(); ex > 0; ex--) {
			text.at(posmark) = wortback.at(ex - 1);
			posmark--;
		}

	}

}
