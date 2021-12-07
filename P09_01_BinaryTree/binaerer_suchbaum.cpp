#include <iostream>
#include <string>
#include "binaerer_suchbaum.h"
namespace suchbaum {

void einfuegen(BaumKnoten*& wurzel, int wert) {

    if (wurzel == nullptr) {
        wurzel = new BaumKnoten; // initialize root of tree
        wurzel->wert = wert;
        wurzel->links = nullptr;
        wurzel->rechts = nullptr;
    }
    else {

        BaumKnoten* temp = wurzel;

        while (true) {

            if (temp->wert == wert) { //node alreay exists
                break;
            }
            else if (temp->links == nullptr && wert < temp->wert) { //add left child after root
                temp->links = new BaumKnoten; //new node
                temp->links->wert = wert;
                temp->links->links = nullptr;
                temp->links->rechts = nullptr;
                temp = temp->links;
                break;
            }
            else if (temp->rechts == nullptr && wert > temp->wert) { //add right child after root
                temp->rechts = new BaumKnoten; //new node
                temp->rechts->wert = wert;
                temp->rechts->links = nullptr;
                temp->rechts->rechts = nullptr;
                temp = temp->rechts;
                break;
            }
            else if (temp->links != nullptr && wert < temp->wert) { //add left tree deeper then one level
                temp = temp->links; //traverse to left
            }
            else if (temp->rechts != nullptr && wert > temp->wert) { //add right tree deeper then one level
                temp = temp->rechts; //traverse to right
            }
        }
    }
}



void knoten_ausgeben(BaumKnoten* knoten, int depth)
{
    if (knoten != nullptr) {
        knoten_ausgeben(knoten->rechts, depth + 1);
        std::cout << std::string(depth * 2, '+') << knoten->wert << std::endl;
        knoten_ausgeben(knoten->links, depth + 1);
    }
}

void ausgeben(BaumKnoten* wurzel) {
    knoten_ausgeben(wurzel, 0);
}

} // end of namespace
