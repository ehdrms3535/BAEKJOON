#include <iostream>

using namespace std;

int main() {
	int N, max = 0, locatex=1,locatey=1;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> N;
			if (max < N) {
				max = N;
				locatex = i;
				locatey = j;
			}
		}
		
	}
	cout << max << endl << locatex << " " << locatey << endl;
}