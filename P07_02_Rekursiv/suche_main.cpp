// Datei: suchen_rekursiv_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"


#include <iostream>
#include <string>
#include "suchen_rekursiv.h"



int main()
{
    Catch::Session().run();

    std::string text = "";
    std::string zkette = "";
    int result = 0;

    std::cout << "Bitte geben Sie den Text ein: ";
    getline(std::cin, text);

    std::cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
    getline(std::cin, zkette);

    result = zeichenkette_suchen_rekursiv(text, zkette);

    if (result == -1) {
        std::cout << "Die Zeichenkette '" << zkette << "' ist NICHT in dem Text '" << text << "' enthalten." << std::endl;
    }
    else {
        std::cout << "Die Zeichenkette '" << zkette << "' ist in dem Text '" << text << "' enthalten. \n"
            << "Sie startet ab Zeichen " << result << " (bei Zaehlung ab 0)." << std::endl;
    }

    std::system("PAUSE");
    return 0;
}