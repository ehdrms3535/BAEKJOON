#include <iostream>

using namespace std;

int main() {
	int N,i=6,count=1;
	cin >> N;
	if (N == 1) {
		cout << count;
		return 0;
	}
	for (int j=1; j < N;j+=i,i += 6) {
		count++;
	}
	cout << count;
}