#include <iostream>

using namespace std;

int main() {
	int N,num;
	cin >> N >> num;

	int min=num, max=num;
	for (int i = 1; i < N; i++) {
		cin >> num;
		if (num < min) min = num;
		if (num > max)max = num;
	}
	cout << min << " " << max;
}