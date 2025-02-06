#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

	float N, sum = 0;
	int data, line;

	cin >> N;
	if (N == 0) {
		cout << 0;
		return 0;
	}
	vector<int> arr;
	line = round(N*15/100);

	for (int i = 0; i < N; i++) {
		cin >> data;
		arr.push_back(data);
	}
	sort(arr.begin(), arr.end());

	for (int j = line; j < N - line;j++) {
		sum += arr[j];
	}
	cout << round(sum / (N - 2 * line));
}