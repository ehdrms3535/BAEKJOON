#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long T,sum=0,M=1234567891;
	string a;

	cin >> T >> a;
	for (int i = 0; i < T; i++) {
		long long ex = i;
		long long result=1,base = 31;
		while (ex > 0) {
			if (ex % 2 == 1) {
				result = (base * result) % M;
			}
			base = base * base % M;
			ex /= 2;
		}
		sum += ((a[i]-96)*result)%M;
		}
	cout << sum%M;

	//a = 97,z=122;
}