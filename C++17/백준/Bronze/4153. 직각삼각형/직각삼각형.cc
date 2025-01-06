#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	while (cin >> A >> B >> C) {
		if (A == 0 && B == 0 && C == 0)break;
		if (A >= B && A >= C) {
			if (A * A == (B * B + C * C)) {
				cout << "right" << endl;
			}
			else cout << "wrong" << endl;
		}
		else if (B >= C && B >= A) {
			if (B * B == (A * A + C * C)) {
				cout << "right" << endl;
			}
			else cout << "wrong" << endl;
		}
		else {
			if (C * C == (B * B + A * A)) {
				cout << "right" << endl;
			}
			else cout << "wrong" << endl;
		}
	}
}