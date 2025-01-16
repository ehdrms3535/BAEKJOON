#include <iostream>
#include <string>


using namespace std;

int main() {
	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int j, countx = 0, county=0;
		bool no=true;
		cin >> s;
		if (s[0] == ')') {
			cout << "NO" << '\n';
			continue;
		}
		if (s.length() % 2 == 1) {
			cout << "NO" << '\n';
			continue;
		}

		for (j=0; j < s.length(); j++) {		
			if (s[j] == '(') {
				s[j] = '0';
				countx++;
				for (int k = j; k < s.length(); k++) {
					if (s[k] == ')') {
						s[k] = '0';
						county++;
						break;
					}
				}
			}
			if (countx != county) {
				cout << "NO" << '\n';
				no = false;
				break;
			}
		}

		if (countx==county && countx+county == s.length()) {
			cout << "YES" << '\n';
		}
		else if (no && countx + county != s.length()) {
			cout << "NO" << '\n';
		}
	}
}