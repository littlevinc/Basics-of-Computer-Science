#include "CharListenKnoten.h"

// initialize static values
int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

// getter
char CharListenKnoten::get_data() { return data; };
CharListenKnoten* CharListenKnoten::get_next() { return next; };
int CharListenKnoten::get_my_id() { return my_id; };

// setter
void CharListenKnoten::set_data(char pData) { data = pData; };
void CharListenKnoten::set_next(CharListenKnoten* pNext) { next = pNext; };

// constructor
CharListenKnoten::CharListenKnoten(char pData, CharListenKnoten* pNext)
{
	data = pData;
	next = pNext;

	my_id = next_available_id;
	next_available_id++;

	object_count++;
}

// destructor
CharListenKnoten::~CharListenKnoten()
{
	object_count--;
}

// functions
void hinten_anfuegen(CharListenKnoten*& anker, const char wert)
{
	CharListenKnoten* newElement = new CharListenKnoten(wert);

	if (anker == nullptr)
	{
		anker = newElement;
	}
	else
	{
		CharListenKnoten* current = anker;
		while (current->get_next() != nullptr) {
			current = current->get_next();
		}
		current->set_next(newElement);
	}
}

void loesche_alle(CharListenKnoten*& anker)
{
	if (anker == nullptr)
	{
		return;
	}
	else
	{
		CharListenKnoten* current = anker->get_next();

		while (current != nullptr)
		{
			CharListenKnoten* tmp = current->get_next();

			delete current;

			current = tmp;
		}

		delete anker;
		anker = nullptr;
	}
}

CharListenKnoten* deep_copy(CharListenKnoten* orig)
{
	if (orig == nullptr)
	{
		return nullptr;
	}
	else
	{
		CharListenKnoten* origCurrent = orig->get_next();
		CharListenKnoten* copyCurrent = new CharListenKnoten(orig->get_data());
		CharListenKnoten* newAnker = copyCurrent;

		while (origCurrent != nullptr)
		{
			CharListenKnoten* newElement = new CharListenKnoten(origCurrent->get_data());
			copyCurrent->set_next(newElement);

			origCurrent = origCurrent->get_next();
			copyCurrent = newElement;
		}

		return newAnker;
	}
}