#include <iostream>

using namespace std;

bool prime(int N) {
	if (N < 2) return false;
	if (N == 2) return true;
	if (N % 2 == 0) return false;
	for (int j = 3; j * j <= N; j+=2) {
		if (N % j == 0) return false;
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (prime(i)) {
			cout << i << '\n';
		}
	}
}