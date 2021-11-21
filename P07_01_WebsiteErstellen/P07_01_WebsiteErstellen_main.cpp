#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::string html = "";
	std::string personen = "";

	std::ifstream htmlseite("webseite.html.tmpl");
	std::ifstream personendaten("personendaten.txt");

	while (std::getline(htmlseite, html)) {

		for (int i = 0; i < html.length(); i++) {
			if (html.at(i) == '%') {
				while (std::getline(personendaten, personen)) {
					std::cout << personen << std::endl;
				}
			}
			else if (i == 0) {
				std::cout << html << std::endl;
			}
		}


	
	}

}
