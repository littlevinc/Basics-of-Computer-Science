#include <iostream>
#include <string>

std::string trimme(std::string s) {

	std::string result = "";
	int start_pos = 0, end_pos = s.length() - 1;

	while (s.at(start_pos) == '+' && start_pos +1 != s.length()) start_pos++;
	if (start_pos == end_pos) return ""; // catch exception when string only contains "+"
	while (s.at(end_pos) == '+') end_pos--;

	for (int i = start_pos; i <= end_pos; i++) result += s.at(i);
	return result;
}

int main() {

	std::string s = "";

	std::cout << "Bitte geben Sie die Textzeilen ein: ? ";
	getline(std::cin, s);
	
	std::cout << "Vorher: " << s << std::endl;
	std::cout << "Nachher: " << trimme(s) << std::endl;

	system("PAUSE");
	return 0;

}