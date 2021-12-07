#include <iostream>
#include <string>
#include "binaerer_suchbaum.h"
using namespace suchbaum;


#define CATCH_CONFIG_RUNNER
#include "catch.h"


int main()
{

    Catch::Session().run();

    BaumKnoten* wurzel = nullptr;
    int value_input = 0, node_count = 0;

    while (value_input != 99) {
        std::cout << "Naechster Wert (99 beendet): ? ";
        std::cin >> value_input;
        if (value_input != 99) {
            einfuegen(wurzel, value_input);
            node_count++;
        }
    }

    ausgeben(wurzel);

    system("PAUSE");
    return 0;

}


