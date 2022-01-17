#include <iostream>
#include "CharListenKnoten.h"

// init const values
int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

void CharListenKnoten::set_data(char data_tmp) {
	this->data = data_tmp;
}

void CharListenKnoten::set_next(CharListenKnoten* next_tmp) {
	this->next = next_tmp;
}

char CharListenKnoten::get_data() {
	return this->data;
}

int CharListenKnoten::get_my_id() {
	return this->my_id;
}

CharListenKnoten* CharListenKnoten::get_next() {
	return this->next;
}


void hinten_anfuegen(CharListenKnoten*& anker, const char wert) {

	CharListenKnoten* neuer_eintrag = new CharListenKnoten(wert);

	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		CharListenKnoten* ptr = anker;
		while (ptr->get_next() != nullptr) {
			ptr = ptr->get_next();
		}
		ptr->set_next(neuer_eintrag);
	
	}

}



void loesche_alle(CharListenKnoten*& anker) {

	
	if (anker == nullptr) {
		return;
	}
	else {
		CharListenKnoten* ptr = anker;
		CharListenKnoten* ptr_old = ptr;

		do {
			ptr_old = ptr;
			ptr = ptr->get_next();
			delete ptr_old;
		} while (ptr != nullptr);

		anker = nullptr;
	}

}


CharListenKnoten* deep_copy(CharListenKnoten* orig) {

	CharListenKnoten* copy_anker;

	if (orig == nullptr) return nullptr;
	else
	{
		// anker for copied list
		copy_anker = new CharListenKnoten(orig->get_data());

		if (orig->get_next() != nullptr)
		{
			CharListenKnoten* tmpc = orig->get_next(); //tempc for data
			CharListenKnoten* tmpo = copy_anker;

			do
			{
				tmpo->set_next(new CharListenKnoten(tmpc->get_data()));
				tmpo = tmpo->get_next();
				tmpc = tmpc->get_next();
			} while (tmpc->get_next() != nullptr);

			tmpo->set_next(new CharListenKnoten(tmpc->get_data()));
		}
	}

	return copy_anker;
}

