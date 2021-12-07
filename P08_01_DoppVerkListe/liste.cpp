// Datei: liste.cpp

#include <string>
#include <iostream>
#include "liste.h"

std::string liste_als_string(TListenKnoten* anker)
{
	std::string resultat = "";

	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten* ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);

			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";

			ptr = ptr->next;
		} while (ptr != nullptr);
		resultat += "]";
	}

	return resultat;
}

// Wird modifiziert in Aufgabe INF-08.01 ...
void hinten_anfuegen(TListenKnoten*& anker, const int wert)
{
	TListenKnoten* neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	

	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten* ptr = anker;
		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
		
	}
}

std::string liste_als_string_rueckwaerts(TListenKnoten* anker) {

	std::string result = "";
	TListenKnoten* ptr = anker; // get the pointer to first element of list

	if (anker == nullptr) {
		result = "Leere Liste.";
	}
	else {

		while (ptr->next != nullptr) {
			ptr = ptr->next;
		} // ptr contains address of last element in list

		result += "[ ";

		do {
			result += std::to_string(ptr->data);

			if (ptr->prev != nullptr) result += " , ";
			else result += " ";

			ptr = ptr->prev;

		} while(ptr != nullptr);

		result += "]";

	}
	return result;
}


void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert) {

	TListenKnoten* ptr = anker;
	TListenKnoten* ptr_prev = nullptr;

	TListenKnoten* neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;

	// case when list is empty
	if (anker == nullptr) {
		
		anker = neuer_eintrag;
	}
	else {

		//case: list is not empty and contains more the one element
		if (ptr != nullptr && ptr->next != nullptr) {


			if (ptr->data != vor_wert) {
				
				// go thru list and stop one position ist found
				do {
					ptr_prev = ptr;
					ptr = ptr->next;
				} while (ptr->data != vor_wert && ptr->next != nullptr);

				// last element of list and element doesn't match term
				if (ptr->next == nullptr && ptr->data != vor_wert) {
					
					neuer_eintrag->data = wert_neu;
					neuer_eintrag->next = nullptr;
					neuer_eintrag->prev = ptr;

					ptr->next = neuer_eintrag;
				}
				else {
					
					neuer_eintrag->data = wert_neu;
					neuer_eintrag->next = ptr;
					neuer_eintrag->prev = ptr_prev;


					ptr->prev = neuer_eintrag;
					ptr_prev->next = neuer_eintrag;
				}

			}
			else {
				// criteria matches element of list
				
				neuer_eintrag->data = wert_neu;
				neuer_eintrag->next = ptr;
				neuer_eintrag->prev = nullptr;

				ptr->prev = neuer_eintrag;
				anker = neuer_eintrag;

			}
		}
		else {
			// list with element add after as last element
			if (ptr->data != vor_wert && ptr->next == nullptr) {
				
				neuer_eintrag->data = wert_neu;
				neuer_eintrag->next = nullptr;
				neuer_eintrag->prev = ptr;

				ptr->next = neuer_eintrag;
				anker = ptr;
				
			}
			// list with one element add before as first element
			if (ptr->data == vor_wert && ptr->next == nullptr) {
				
				neuer_eintrag->data = wert_neu;
				neuer_eintrag->next = ptr;
				neuer_eintrag->prev = nullptr;

				ptr->prev = neuer_eintrag;
				anker = neuer_eintrag;

			}

		}
	}


}


void aus_liste_loeschen(TListenKnoten*& anker, int wert)
{
	// checks if list exists
	if (anker != nullptr)
	{
		// criteria matches first element
		if (anker->next == nullptr && anker->data == wert)
		{
			anker = nullptr;
		}
		else
		{
			TListenKnoten* tmp = new TListenKnoten;
			TListenKnoten* ptr = anker;
			if (wert == anker->data)
			{
				// first element in list with multiple elements
				anker = anker->next;
				anker->prev = nullptr;
				if (anker->next != nullptr)
				{
					ptr = anker->next;
					ptr->prev = anker;
				}

			}
			else
			{
				do {
					// every other position
					if (wert == ptr->data)
					{

						tmp = ptr->prev;

						if (ptr->next != nullptr)
						{
							tmp->next = ptr->next;
							tmp = ptr->next;
							tmp->prev = ptr->prev;
						}
						else
						{
							tmp->next = nullptr;
							delete ptr;
						}
						break;
					}
					ptr = ptr->next;
				} while (ptr != nullptr);
			}
		}
	}
}