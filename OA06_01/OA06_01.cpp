#include <iostream>
#include <string>

void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil) {

	bool char_found = false;
	int marker = 0;
	
	for (int x = 0; x < eingabe.length(); x++) {
		if (eingabe.at(x) == zeichen) { 
			char_found = true;
			marker = x;
			break; 
		}
		else erster_teil += eingabe.at(x);
	}

	if (char_found == true) {
		for (int i = marker + 1; i < eingabe.length(); i++) {
			zweiter_teil += eingabe.at(i);
		}
	}

	std::cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << std::endl;
	std::cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << std::endl;
}

int main() {

	std::string eingabe = "";
	std::string first_part = "", second_part = "";
	char zeichen; 

	std::cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(std::cin, eingabe);

	std::cout << "Bitte geben Sie das Zeichen ein: ? ";
	std::cin >> zeichen;

	spalte_ab_erstem(zeichen, eingabe, first_part, second_part);

	system("PAUSE");
	return 0;
}