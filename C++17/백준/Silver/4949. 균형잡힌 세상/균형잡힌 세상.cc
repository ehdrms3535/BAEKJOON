#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	string s;
	while (true) {
		getline(cin, s);
		if (s == ".") break;
		int i = 0;
		bool check = true;
		vector<char> arr;
		for (; i<s.length(); i++) {
			if (s[i]=='[') {
				arr.push_back('[');
			}
			else if (s[i] == '(') {
				arr.push_back('(');
			}
			else if (s[i] == ']') {
				if (arr.size() == 0) {
					check = false;
					break;
				}
				else if (arr[arr.size() - 1] == '[') {
					arr.erase(arr.end()-1);
					continue;
				}
				else {
					check = false;
					break;
				}
			}
			else if (s[i] == ')') {
				if (arr.size() == 0) {
					check = false;
					break;
				}
				else if (arr[arr.size() - 1] == '(') {
					arr.erase(arr.end() - 1);
					continue;
				}
				else {
					check = false;
					break;
				}
			}

		}
		if (arr.size() > 0) cout << "no" << '\n';
		else if (check) {
			cout << "yes" << '\n';
		}
		else cout << "no" << '\n';
	}
}