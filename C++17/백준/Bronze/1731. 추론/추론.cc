#include <iostream>

using namespace std;

int main() {
	int a, b,tmp;
	cin >> a;

	int* numlist = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> numlist[i];
	}
	if ((numlist[0] + numlist[2]) == 2 * numlist[1]) {
		tmp = numlist[1] - numlist[0];
		cout << numlist[a - 1] + tmp;
	}
	else if ((numlist[0] * numlist[2]) == numlist[1] * numlist[1]) {
		tmp = numlist[1] / numlist[0];
		cout << numlist[a - 1] * tmp;
	}
}