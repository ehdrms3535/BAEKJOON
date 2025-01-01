#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<char> vec = { '-','\\','(','@','?','>', '&','%','/' };
	string s;
	int sum = 0;
	int alpha =1;
	int index;
	while (true) {
		cin >> s;
		if (s == "#") {
			break;
		}
		for (int i = 0; i < s.length();i++) {
			//cout << "s : " << s.length() << endl;
			if (s[i] == '/') {
				index = -1;
			}
			else {
				auto it = find(vec.begin(), vec.end(), s[i]);
				index = static_cast<int>(it - vec.begin());
				//cout << "index : " << index << endl;
			}
			for(int j=0; j<s.length() - i - 1; j++) {
				alpha*= 8;
			}
			alpha *= index;
			//cout << alpha <<  endl;
			sum += alpha;
			alpha = 1;
		}
		cout << sum << endl;
		sum = 0;

	}
}