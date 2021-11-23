#include <iostream>
#include <string>
#include <fstream>

int main() {

    // variables
    std::string daten[5][3];
    std::string filecontent = "";
    std::string personen = "";

    // struct
    struct personendaten {
        std::string name;
        std::string vorname;
        std::string birthdate;
    } personenarray[5];

    // write personendaten.txt into struct
    std::fstream personendaten("personendaten.txt", std::ios::in);
    for (int i = 0; std::getline(personendaten, personen); i++) {

        int indexN = personen.find(",");
        int indexV = personen.find(",", indexN + 1);

        std::string nname = personen.substr(0, indexN);
        std::string vname = personen.substr(indexN + 2, indexV - indexN - 2);
        std::string gebDatum = personen.substr(indexV + 2);

        personenarray[i].name = nname;
        personenarray[i].vorname = vname;
        personenarray[i].birthdate = gebDatum;

    }
    personendaten.close();



    // html code > file
    std::fstream website("webseite.html.tmpl", std::ios::in);
    std::string htmlline = "";
    std::string htmlcode = "";
    while (std::getline(website, htmlline)) {
        htmlcode += htmlline + "\n";
    }
    website.close();

    // kurze liste
    std::string resultshort = "";
    for (int i = 0; i < 5; i++) {

        resultshort += "<b>" + personenarray[i].name + "</b>, " + personenarray[i].vorname + "</br>\n";
    }

    int shortlist = htmlcode.find('%');
    htmlcode.replace(shortlist, 1, resultshort);

    // lange liste
    std::string resultlong = "";
    for (int i = 0; i < 5; i++) {
        resultlong += "<b>" + personenarray[i].vorname + " " + personenarray[i].name + "</b>, " + personenarray[i].birthdate + "</br>\n";
    }

    int longlist = htmlcode.find('$');
    htmlcode.replace(longlist, 1, resultlong);

    // create website file
    std::fstream ausgabe("webseite.html", std::ios::out);
    ausgabe << htmlcode << std::endl;
    ausgabe.close();

}