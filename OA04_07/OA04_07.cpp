#include <iostream>
#include <string>
using namespace std;

int main() {

	string text = "";
	bool wronginput = false, compare = false;
	char pre[50], post[50];
	int textlen = 0;


	do {
		cout << "Text: ? ";
		getline(cin, text);
	
		wronginput = false;

		for (int i = 0; i < text.length(); i++) {	
			if (text.at(i) < 'a' || text.at(i) > 'z') {
				wronginput = true;
				break;
			}		
		}
	} while (wronginput);

	textlen = text.length();

	for (int a = 0; a < text.length(); a++) {
		pre[a] = text.at(a);
		post[textlen - 1] = text.at(a);
		textlen--;
	}

	for (int s = 0; s < text.length(); s++) {
		if (pre[s] != post[s]) {
			compare = false;
		} 
		else
		{
			compare = true;
		}
	}

	if (compare == false) {
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}
	else
	{
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}
	
}