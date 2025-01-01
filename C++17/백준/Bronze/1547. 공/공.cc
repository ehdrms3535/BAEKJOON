#include <iostream>

using namespace std;

int main() {
	int a[3] = { 1,0,0 };
	int N;
	int temp, first, second;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> first >> second;
		temp = a[first - 1];
		a[first - 1] = a[second - 1];
		a[second - 1] = temp;
	}

	for (int j = 0; j < 3; j++) {
		if (a[j] == 1) {
			cout << j + 1;
		}
	}
}