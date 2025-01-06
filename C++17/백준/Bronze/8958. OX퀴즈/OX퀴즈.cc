#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, count = 0, sum = 0;

	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		sum = 0;
		count = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') count++;
		    else if (s[j] == 'X') count = 0;
			sum += count;
		}
		cout << sum << endl;
	}
}