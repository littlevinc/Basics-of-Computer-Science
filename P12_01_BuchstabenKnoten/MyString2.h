#pragma once

#include <string>

#include "CharListenKnoten.h"


class MyString2 
{
private:
	CharListenKnoten* anker;

public:

	// setter
	void set_anker(CharListenKnoten* anker_tmp) { this->anker = anker_tmp; }

	// getter
	CharListenKnoten* get_anker() { return this->anker; }

	// constructor
	MyString2() { anker = nullptr; } 

	MyString2(std::string string_tmp) { for (int i = 0; i < string_tmp.length(); i++) hinten_anfuegen(anker, string_tmp.at(i)); } // second constructor


	MyString2(const MyString2& orig_mystring) { this->anker = deep_copy(orig_mystring.anker); } // copy constructor

	// assignment operator
	MyString2& operator = (const MyString2& orig) {
		loesche_alle(anker);
		anker = deep_copy(orig.anker);
		return *this;
	}

	~MyString2() { loesche_alle(anker); } // destructor

	unsigned int length() const; // 13.05

	char at(unsigned int pos) const; // 13.06

	std::string to_string() const; // 13.07

	MyString2 operator + (char c) const; //13.08

};