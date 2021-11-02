#include <iostream>
using namespace std;

int main() {

	//variables
	int nu1_var = 0;
	int nu2_var = 0;
	int nu3_var = 0;
	int nu4_var = 0;
	int nu5_var = 0;

	int min_tmp = 0;
	int max_tmp = 0;
	int min_pos = 0;
	int max_pos = 0;
	int pos = 1;


	//get user input

	//first number > set baseline to compare the following numbers
	cout << "Bitte geben Sie die "<< pos <<". Zahl ein: ? ";
	cin >> nu1_var;
	min_tmp = nu1_var;
	max_tmp = nu1_var;
	min_pos = pos;
	max_pos = pos;
	pos++;
	
	//second number > start comparing process for each entry
	cout << "Bitte geben Sie die " << pos << ". Zahl ein: ? ";
	cin >> nu2_var;
	if (nu2_var < min_tmp) {
		min_tmp = nu2_var;
		min_pos = pos;
	}
	else if (nu2_var > max_tmp) {
		max_tmp = nu2_var;
		max_pos = pos;
	}
	else if (nu2_var == max_tmp || nu2_var == min_tmp) 
	{
		min_pos = min_pos;
		max_pos = max_pos;
	}
	pos++;

	//third number
	cout << "Bitte geben Sie die " << pos << ". Zahl ein: ? ";
	cin >> nu3_var;
	if (nu3_var < min_tmp) {
		min_tmp = nu3_var;
		min_pos = pos;
	}
	else if (nu3_var > max_tmp) {
		max_tmp = nu3_var;
		max_pos = pos;
	}
	else if (nu3_var == max_tmp || nu3_var == min_tmp)
	{
		min_pos = min_pos;
		max_pos = max_pos;
	}
	pos++;

	//fourth number
	cout << "Bitte geben Sie die " << pos << ". Zahl ein: ? ";
	cin >> nu4_var;
	if (nu4_var < min_tmp) {
		min_tmp = nu4_var;
		min_pos = pos;
	}
	else if (nu4_var > max_tmp) {
		max_tmp = nu4_var;
		max_pos = pos;
	}
	else if (nu4_var == max_tmp || nu4_var == min_tmp)
	{
		min_pos = min_pos;
		max_pos = max_pos;
	}
	pos++;

	//fifth number
	cout << "Bitte geben Sie die " << pos << ". Zahl ein: ? ";
	cin >> nu5_var;
	if (nu5_var < min_tmp) {
		min_tmp = nu5_var;
		min_pos = pos;
	}
	else if (nu5_var > max_tmp) {
		max_tmp = nu5_var;
		max_pos = pos;
	}
	else if (nu5_var == max_tmp || nu5_var == min_tmp)
	{
		min_pos = min_pos;
		max_pos = max_pos;
	}

	//results
	cout << "Die " << min_pos << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << min_tmp << endl;
	cout << "Die " << max_pos << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << max_tmp << endl;

	system("PAUSE");
	return 0;
}
