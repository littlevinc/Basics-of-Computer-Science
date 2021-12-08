#include <iostream>
#include "zeichenkette_suchen.h"

int zeichenkette_suchen(const char* text, const char* zkette) {

	// variables
	const int default_result = -1;
	int count_text = 0, count_zkette = 0, result = default_result, matching_val = 0;
	

	// count chars for each string
	for (count_text = 0; text[count_text] != '\0'; count_text++);
	for (count_zkette = 0; zkette[count_zkette] != '\0'; count_zkette++);
	
	// für jeden buchstaben in text
	for (int i = 0; i < (count_text-count_zkette)+1; i++) {

		// ab position i in text wird das wort verglichen
		for (int x = 0; x < count_zkette; x++) {

			// positionen matchen
			if (text[i + x] == zkette[x]) {

				// erstmaliges matchen für wortperiode
				if (result == default_result) {
					result = i+x;
				}

				matching_val++; //prüfsumme für wort
			}
			else if (result != default_result) { // positionen haben in perionde gematcht 

				// prüfsumme stimmt
				if (matching_val == count_zkette) {
					return result;
				}

				// nur partielle übereinstimmung
				result = default_result;
				break;

			}
			else {
				break; // erster buchstabe war kein match
			}
		}
	}

	return result;

}


