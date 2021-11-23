#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// globally defined struct
struct personalinfo {
		std::string vorname, name, birthdate;
	};

void splitWords(std::ifstream,  personalinfo[]);

int main() {



	// creat array of personalinfo struct
	personalinfo test1[5];

	std::string html = "";
	std::string personen = "";

	
	// open both files into variable
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

	splitWords(personendaten, test1);


}

void splitWords(std::ifstream& datei, personalinfo info[]) {

       std::string htmlline = "";

       while(std::getline(datei, htmlline)) {

              std::istringstream iss(htmlline);
              std::string word;
              while(iss >> word) {  
                     std::cout << word << std::endl;
              }
       } 
    
}
