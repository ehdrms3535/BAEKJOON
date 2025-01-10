#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(string a,string b) {
	if (a == b) {
		return false;
	}
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	int N;
	cin >> N;

	vector<string> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), cmp);
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (const auto& n : arr) cout << n << endl;
	}