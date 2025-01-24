#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, T, i,j;

	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

	cin >> T;
	vector<int> arr2(T);
	int* ans = new int[T];
	for (i = 0; i < T; i++) {
		cin >> arr2[i];
		ans[i] = 0;
	}

	for (i = 0; i < T; i++) {
		cout << upper_bound(arr.begin(),arr.end(),arr2[i])-lower_bound(arr.begin(),arr.end(),arr2[i]) << " ";
	}

}