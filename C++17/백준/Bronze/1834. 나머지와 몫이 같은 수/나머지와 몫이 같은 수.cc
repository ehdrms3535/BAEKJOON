#include <iostream>

using namespace std;

int main() {
	long long a,sum=0;
	cin >> a;

	for (int i = 1; i < a; i++) {
		sum += i * a + i;
	}
	cout << sum;

}