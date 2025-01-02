#include <iostream>

using namespace std;

int main() {

	long long a, b;
	long long c;

	cin >> a >> b;
	// cout << a << " " << b << endl;
	if (a < b) {
		c = (double)(a + b)/2 * (b + 1 - a);
		cout << c;
	}
	else if (a > b) {
		c = (double)(a + b)/2 * (a + 1 - b);
		cout << c;
	}
	else cout << (long long)a;
}