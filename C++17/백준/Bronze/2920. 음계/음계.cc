#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	if (N == 1) {
		for (int i = N+1; i < 8; i++) {
			cin >> N;
			if (N != i) {
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
	}
	else if (N == 8) {
		for (int j = N-1; j > 0; j--) {
			cin >> N;
			if (N != j) {
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
	}
	else cout << "mixed";
}