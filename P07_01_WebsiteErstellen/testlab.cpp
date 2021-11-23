#include <iostream>
#include <string>
#include <fstream>


// functions
void getWord(std::string tupel, std::string daten[5][3], int datarow) {
    
    int position = 0;
    for (int i = 0; i < tupel.length(); i++) {
        if (tupel.at(i) == ',') {
            position++;
            i += 2;
        }

        daten[datarow][position] += tupel.at(i);
        
    }

}


// global variables
// -


// main
int main() {

    // variables
     std::string daten[5][3];

    // declare struct, define array
    struct personendaten {
        std::string name;
        std::string vorname;
        std::string birthdate;
    } personenarray[5];


    
    std::fstream personendaten("personendaten.txt", std::ios::in); // open file into variable called personendaten
   
    //std::cout << filecontent << std::endl; // print first line of file from variabel
    std::string filecontent = ""; // variable to store lines from file  
    //getWord(filecontent,daten, 0);
    
    getWord(filecontent,daten, 0);
    getline(personendaten, filecontent); // write first line of file into variable 
    getWord(filecontent,daten, 1);


    int countpos = 0;
    std::cout << daten[countpos][0] << daten[countpos][1] << daten[countpos][2] << std::endl;
    int countpos = 1;
    std::cout << daten[countpos][0] << daten[countpos][1] << daten[countpos][2] << std::endl;

    


    personendaten.close(); // close file
    
}