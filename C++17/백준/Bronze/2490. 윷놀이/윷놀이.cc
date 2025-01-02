#include <iostream>

using namespace std;

int main() {
	char N[5] = {'A','B','C','D','E'};
	int T;
	for (int i = 0; i < 3; i++) {
		int count = -1;
		for (int j = 0; j < 4; j++) {
			cin >> T;
			if (T == 0) {
				count++;
			}
		}
		if (count == -1) {
			cout << N[4] << endl;
		}
		else cout << N[count] << endl;

	}
}