#pragma once
#include "CharListenKnoten.h"


class MyString2 {

protected:
	CharListenKnoten* anker;

private:

public:
	MyString2() {};
	void set_anker(CharListenKnoten* anker_tmp) { this->anker = anker_tmp; }
	CharListenKnoten* get_anker() { return this->anker;  }


};