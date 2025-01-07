#include <iostream>

using namespace std;

int find(int a, int b) {
	if (a == 0 || b == 1) {
		if (a == 0 && b == 1) return 1;
		else if (a == 0) return b;
		else if (b == 1) return 1;
	}
	return find(a-1, b) + find(a, b-1);
}

int main() {
	int N;
	cin >> N;
	int a, b;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		cout << find(a, b) << endl;;
	}
}