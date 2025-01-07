#include <iostream>

using namespace std;

bool find(int t) {
	if (t == 1) return false;
	for (int i = 2; i * i <= t; i++) {
		if (t % i == 0) return false;
	}
	return true;
}


int main() {
	int N, T, count=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> T;
		if (find(T))count++;
	}
	cout << count;
}