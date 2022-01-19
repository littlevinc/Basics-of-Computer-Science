#pragma once

class CharListenKnoten
{
private:
	char data;
	CharListenKnoten* next;
	int my_id;

public:
	static int next_available_id;
	static int object_count;

	// getter
	char get_data();
	CharListenKnoten* get_next();
	int get_my_id();

	// setter
	void set_data(char pData);
	void set_next(CharListenKnoten* pNext);

	// constructor
	CharListenKnoten(char pData, CharListenKnoten* pNext = nullptr);

	// destructor
	~CharListenKnoten();
};

// functions
void hinten_anfuegen(CharListenKnoten*& anker, const char wert);
void loesche_alle(CharListenKnoten*& anker);
CharListenKnoten* deep_copy(CharListenKnoten* orig);