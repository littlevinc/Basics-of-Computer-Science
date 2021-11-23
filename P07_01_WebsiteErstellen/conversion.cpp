#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


void splitWords(std::ifstream& datei, personalinfo info[]) {

       std::string htmlline = "";

       while(std::getline(datei, htmlline)) {

              std::istringstream iss(htmlline);
              std::string word;
              while(iss >> word) {  
                     
              }
       } 
    
}