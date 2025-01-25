#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int T,sum=0,M=1234567891;
	string a;

	cin >> T >> a;
	for (int i = 0; i < T; i++) {
		sum += ((int)a[i]-96) * pow(31,i);
	}
	cout << sum%M;

	//a = 97,z=122;
}