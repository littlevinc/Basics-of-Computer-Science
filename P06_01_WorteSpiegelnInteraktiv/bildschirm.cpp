#include <iostream>
#include <string>


void ausgabe(std::string text, int pos) {

	int xpos = pos;

	std::cout << text << std::endl;

	// positioning of the pointer
	for (int x = 0; x < xpos; x++) {
		std::cout << " ";
	}

	std::cout << "*" << std::endl;
}


char eingabe() {

	char eingabe;

	std::cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ? ";
	std::cin >> eingabe;

	return eingabe;
}