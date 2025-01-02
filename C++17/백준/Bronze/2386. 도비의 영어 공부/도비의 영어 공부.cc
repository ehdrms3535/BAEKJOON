#include <iostream>
#include <string>
using namespace std;

int main() {

	char a;
	string b;
	int count;
	while (true) {
		count = 0;
		cin >> a;
		if (a == '#')break;
		getline(cin, b);
		for (int i = 0; i < b.length(); i++) {
			if (tolower(b[i]) == a) {
				count++;
			}
		}
		cout << a << " " << count << endl;
	}
}