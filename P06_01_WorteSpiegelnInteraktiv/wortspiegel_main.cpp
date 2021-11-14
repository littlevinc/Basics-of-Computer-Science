// Datei: wortspiegel_main.cpp
#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include "wortfunktionen.h"
#include "bildschirm.h"

#include <iostream>
#include <string>
using namespace std;






int main()
{
	// Aufruf der Unit Tests ...
	Catch::Session().run();

	string text = "";
	int xpos = 0;
	char option = ' ';
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);

	while (true) {

		ausgabe(text, xpos);

		option = eingabe();
		
		if (option == 'l') {
			xpos -= 1;
		}
		else if (option == 'r')
		{
			xpos += 1;
		}
		else if (option == 's')
		{
			wortspiegel(text, xpos);
		}
		else if (option == 'q')
		{
			break;
		}
	}

	system("PAUSE");
	return 0;

}