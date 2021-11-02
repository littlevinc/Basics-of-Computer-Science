#include <iostream>
#include <string>
using namespace std;

int main() {

	int i = 50;

	do {
		cout << i << endl;
		i -= 5;
	} while (i >= 0);
	
	system("PAUSE");
	return 0;
}