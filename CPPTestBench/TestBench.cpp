#include <iostream>
#include <string>
#include <fstream>

int zeichenkette_suchen_rekursiv(std::string text, std::string zkette, unsigned int text_such_pos = 0) {
	if (text.substr(text_such_pos, zkette.length()) == zkette) {
		return text_such_pos;
	}
	else if (text_such_pos == text.length() - zkette.length()) {
		return -1;
	}
	else {
		text_such_pos++;
		return zeichenkette_suchen_rekursiv(text, zkette, text_such_pos);
	}
}


int main() {

	std::string text = "Hallo welt wie geht es dir";
	std::string zeichenkette = "x";


	int ausgabe = 0;

	ausgabe = zeichenkette_suchen_rekursiv(text, zeichenkette);

	std::cout << ausgabe;




}

/*
	for (int x = 0; x < text.length() - zeichenkette.length() ; x++) {
		std::cout << text.substr(x, zeichenkette.length()) << std::endl;
		if (text.substr(x, zeichenkette.length()) == zeichenkette) {
			
			return x;
		}
	}

	return -1;
*/
