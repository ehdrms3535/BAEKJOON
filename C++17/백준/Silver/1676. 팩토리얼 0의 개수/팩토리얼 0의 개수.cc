#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, count2 = 0, count5 = 0,count = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int a=i; a % 2 == 0 || a % 5 == 0;) {
			if (a % 2 == 0) {
				a /= 2;
				count2++;
			}
			if (a % 5 == 0){
				a /= 5;
				count5++;
			}
		}
	}


	for (;count2>0&&count5>0;count2--,count5--) {
		count++;
	}
	cout << count;
}