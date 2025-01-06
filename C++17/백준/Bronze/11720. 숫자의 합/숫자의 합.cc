#include <iostream>
#include <string>
using namespace std;

int main() {
	int N,sum=0;
	string s;
	cin >> N;
	cin >> s;
	for (int i = 0; i < N; i++) {
		int convert = s[i] - '0';
		sum += convert;
	}
	cout << sum;
}