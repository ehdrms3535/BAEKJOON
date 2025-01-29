#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;

	cin >> T;
	vector<pair<int,int>> arr(T);

	for (int i = 0; i < T; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr.begin(), arr.end(), cmp);
	
	int count = 0,end =0;

	for (int j = 0; j<T; j++) {
		if (arr[j].first >= end) {
			end = arr[j].second;
			count++;
		}
	}
	cout << count;
}