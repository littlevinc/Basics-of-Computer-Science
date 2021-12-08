#include <iostream>
#include <cstring>
#include "zeichenkette_suchen.h"

#define CATCH_CONFIG_RUNNER
#include "catch.h"

int main()
{
    Catch::Session().run();

    int result = 0;
    const int len = 21;
    char* text = new char[21], *zkette = new char[21];
     
    std::cout << "Bitte geben sie den Text ein:  ";
    std::cin.getline(text, len);

    do {
        std::cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
        std::cin.getline(zkette, len);
    } while (strlen(zkette) < 1);




    //std::cout << text << " " << zkette << std::endl;
    std::cout << zeichenkette_suchen(text, zkette);
  
 
    return 0;
}
