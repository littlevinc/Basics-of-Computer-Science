#include "MyString2.h"
#include "CharListenKnoten.h"

unsigned int MyString2::length() const {

	int n = 0; // length of string / amount of chars
	CharListenKnoten* root = this->anker;

	if (root == nullptr) return 0; //list is empty
	
	//list has lenght of n
	while (true) {
		n++;
		root = root->get_next();
		if (root == nullptr) return n;
	}
}

char MyString2::at(unsigned int pos) const {

	CharListenKnoten* ptr = this->anker;

	for (int i = 0; i < pos; i++) {
		if (ptr == nullptr) return '\0';
		ptr = ptr->get_next();
	}

	if (ptr != nullptr) return ptr->get_data();
	else return '\0';
}

std::string MyString2::to_string() const {

	CharListenKnoten* ptr = anker;
	std::string result = "";

	for (int i = 0; i <= this->length(); i++) {
		if (ptr == nullptr) return result;
		result += ptr->get_data();
		ptr = ptr->get_next();
	}

	return result;
}


MyString2 MyString2::operator + (char c) const
{
	std::string newString = this->to_string();
	newString += c;

	MyString2 newMyString = MyString2(newString);
	return newMyString;
}



