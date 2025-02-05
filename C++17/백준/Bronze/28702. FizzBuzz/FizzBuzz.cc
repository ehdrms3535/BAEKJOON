#include <iostream>
#include <string>

using namespace std;

int main() {
	string A;
	int T,i;
	
	for (i = 0; i < 3; i++) {
		cin >> A;
		if (A != "Fizz" && A != "Buzz" && A != "FizzBuzz") {
			T = stoi(A);
			break;
		}
	}
	

	if (i == 0) T += 3;
	else if (i == 1) T += 2;
	else T += 1;

	if (T % 15 == 0) cout << "FizzBuzz";
	else if (T % 3 == 0) cout << "Fizz";
	else if (T % 5 == 0) cout << "Buzz";
	else cout << T;
}