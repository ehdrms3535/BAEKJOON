#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 1,cnt=666,data;
	cin >> data;
	for (; count != data;) {
		cnt++;
		if (to_string(cnt).find("666") != -1) {
			count++;
		}
	}

	cout << cnt;
}