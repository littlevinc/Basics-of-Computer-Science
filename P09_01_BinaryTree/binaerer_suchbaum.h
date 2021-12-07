#pragma once



namespace suchbaum {
    struct BaumKnoten
    {
        int wert;
        struct BaumKnoten* links;
        struct BaumKnoten* rechts;
    };

    void einfuegen(BaumKnoten*& wurzel, int wert);
    void knoten_ausgeben(BaumKnoten* knoten, int depth);
    void ausgeben(BaumKnoten* wurzel);
}