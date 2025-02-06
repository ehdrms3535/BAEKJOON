#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, data;
	string a;
	cin >> N;

	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == "push") {
			cin >> data;
			arr.push_back(data);
		}
		else if (a == "pop") {
			if (arr.size() > 0) {
				data = arr[0];
				arr.erase(arr.begin());
				cout << data << '\n';
			}
			else cout << -1 << '\n';

		}
		else if (a == "size") {
			cout << arr.size() << '\n';

		}
		else if (a == "empty") {
			if (arr.size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		else if (a == "front") {
			if (arr.size() == 0) cout << -1 << '\n';
			else cout << arr[0] << '\n';
		}
		else if (a == "back") {
			if (arr.size() == 0) cout << -1 << '\n';
			else cout << arr[arr.size() - 1] << '\n';
		}

	}
}