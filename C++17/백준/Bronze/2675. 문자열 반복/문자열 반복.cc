#include <iostream>
#include <string>
using namespace std;

int main() {
	int N,T;
	string s;
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> T >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < T; k++) {
				cout << s[j];
			}
		}
		cout << endl;

	}

}