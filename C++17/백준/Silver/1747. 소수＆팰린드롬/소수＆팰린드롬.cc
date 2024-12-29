#include <iostream>
#include <string>
using namespace std;


bool find(int num){
	string a = to_string(num);
	for (int j = 0; j < a.length()/2; j++) {
		if (a[j] != a[a.length()-j-1]) return false;
	}
	return true;

}
bool prime(int i) {
	if (i == 1) return false;
	for (int j = 2; j * j <= i; j ++) {
		if (i % j == 0) {
			{
				return false;
			}
		}
	}
	return true;
}


int main() {

	int a;
	cin >> a;
	int num = a;
	while (true) {
		if (find(num)) {
			if (prime(num)) {
				cout << num;
				break;
			}
		}
		num++;
	}
}