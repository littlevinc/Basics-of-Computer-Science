#include <iostream>
#include <string>
#include "suchen_rekursiv.h"


int zeichenkette_suchen_rekursiv(std::string text, std::string zkette, unsigned int text_such_pos)
{
	if (zkette.length() > text.length() || text == "") {
		return -1;
	}

	if (text.substr(text_such_pos, zkette.length()) == zkette) {
		return text_such_pos;
	}

	if (text_such_pos == text.length() - zkette.length()) {
		return -1;
	}

	text_such_pos++;
	return zeichenkette_suchen_rekursiv(text, zkette, text_such_pos);
	
}