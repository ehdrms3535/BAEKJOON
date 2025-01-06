#include <iostream>
#include <string>
using namespace std;

int main() {
	int  A, B, C;
	cin >> A >> B >> C;
	cout << A + B - C << endl;
	string a=to_string(A), b=to_string(B);
	cout << stoi(a + b) - C; 

}