#include<iostream>
#include<string>

using namespace std;

bool search(string s) {
	if (s.length() == 1) {
		return true;
	}
	for (int i = 0; i <= s.length() / 2-1; i++) {
	
		if (s[i]!=s[s.length()-1-i]) {
			return false;
		}
	}
	return true;
}

int main() {

	string s;
	bool pal;
	while (s!="0") {
		cin >> s;
		if (s == "0") {
			break;
		}
		cout << ((search(s)) ? "yes" : "no")<< endl;
	}
}