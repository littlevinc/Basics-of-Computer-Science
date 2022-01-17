#pragma once



class CharListenKnoten {

private: 
	
	char data;
	int my_id;
	CharListenKnoten* next;

public:

	// constructor
	CharListenKnoten(char data_val, CharListenKnoten* next_val = nullptr) : data{ data_val }, next{ next_val } { my_id = next_available_id; next_available_id++; object_count++;  };

	// destructor
	~CharListenKnoten() {
		object_count--;
	}

	// public attributes
	static int next_available_id;
	static int object_count;
	 
	// get methods
	char get_data();
	int get_my_id();
	CharListenKnoten* get_next();

	// set methods
	void set_data(char data_tmp);
	void set_next(CharListenKnoten* next_tmp);

};


void hinten_anfuegen(CharListenKnoten*& anker, const char wert);
void loesche_alle(CharListenKnoten*& anker);
CharListenKnoten* deep_copy(CharListenKnoten* orig);