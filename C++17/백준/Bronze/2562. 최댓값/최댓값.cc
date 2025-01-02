#include <iostream>

using namespace std;

int main() {
	int N,max=0,locate;

	for (int i = 1; i <= 9; i++) {
		cin >> N;
		if (max<N) {
			max = N;
			locate = i;
		}
	}
	cout << max << endl << locate << endl;
}