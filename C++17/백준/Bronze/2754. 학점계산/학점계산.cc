#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	string s;
	double sum = 4.0;
	cin >> s;
	cout << fixed;
	cout << setprecision(1);
	if (s[0] == 'F') {
		cout << 0.0 << endl;;
		return 0;
	}
	sum += (double)'A' - s[0];
	if (s[1] == '+') {
		sum += 0.3;
	}
	else if (s[1] == '-') {
		sum -= 0.3;
	}
	cout << sum << endl;
}