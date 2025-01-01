#include <iostream>

using namespace std;

int main() {
	int a,count=0,i=1;
	cin >> a;

	for (;a > 0;) {
		if (i > a) {
			i = 1;
		}
		count += 1;
		a -= i++;
	}
	cout << count;
}