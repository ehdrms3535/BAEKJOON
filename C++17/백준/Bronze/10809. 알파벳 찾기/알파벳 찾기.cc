#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}
	getline(cin, s);
	for (int j = 0; j < s.length(); j++) {
		if (s[j] == ' '||arr[int(s[j]) - 97]>-1) continue;
		arr[int(s[j])-97] = j;
	}
	for (int k = 0; k < 26; k++) cout << arr[k] << " ";
}