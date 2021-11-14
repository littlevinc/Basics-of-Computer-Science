#include <iostream>
#include <string>
#include "wortfunktionen.h"
using namespace std;

void wortspiegel(string text, int pos) {

	int pos_var = pos;
	string text_var = text, ausgabe = "";

	if (text_var.at(pos) != ' ') {

		do {
			pos_var++;
		} while (pos_var < text_var.length() && text_var.at(pos_var) != ' ' && text_var.at(pos_var) != '.');

		pos_var -= 1;
		ausgabe += text_var.at(pos_var);

		while (text_var.at(pos_var) != ' ' && pos_var > 0) {
			--pos_var;
			ausgabe += text_var.at(pos_var);
		}
		cout << ausgabe;
	}
}