#include <iostream>
#include <string> 


int main() {

	int zahlen_input[9] = { 0 };
	int num_count[6] = { 0 }, result = 0;

	for (int i = 0; i < 9; i++) {
		do {
			std::cout << "Bitte geben Sie die " << i+1 << ". Zahl ein: ? ";
			std::cin >> zahlen_input[i];
		} while (zahlen_input[i] < 1 || zahlen_input[i] > 6);
	}
	
	for (int y = 1; y < 7; y++) {
		for (int x = 0; x < 9; x++) {
			if (zahlen_input[x] == y) num_count[y]++;
		}
		if (num_count[y] >= 1) result++;
	}
	
	std::cout << "In der Eingabe kamen " << result << " unterschiedliche Zahlen vor.";

	system("PAUSE");
	return 0;
	
}