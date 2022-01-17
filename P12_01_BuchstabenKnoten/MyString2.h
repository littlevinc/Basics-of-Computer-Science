#pragma once
#include "CharListenKnoten.h"
#include <string>


class MyString2 {

protected:
	CharListenKnoten* anker;

private:

public:
	
	MyString2() { anker = nullptr; } // first constructor
	MyString2(std::string string_tmp) { for (int i = 0; i < string_tmp.length(); i++) hinten_anfuegen(anker, string_tmp.at(i)); } // second constructor

	MyString2(const MyString2& orig_mystring) { deep_copy(anker); } // copy constructor
	
	~MyString2() { loesche_alle(anker); } // destructor


	void set_anker(CharListenKnoten* anker_tmp) { this->anker = anker_tmp; }
	CharListenKnoten* get_anker() { return this->anker;  }

};