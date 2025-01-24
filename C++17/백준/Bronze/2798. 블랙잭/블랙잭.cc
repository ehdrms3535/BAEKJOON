#include <iostream>
//#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, max, min = 0, temp1 = 0, temp2 = 0;
	cin >> N >> max;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

    for (int i = 0; i < N - 2; i++) {
        int left = i + 1;
        int right = N - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum <= max) {
                min = (sum > min) ? sum : min;
                left++;
            }
            else {
                right--;
            }
        }
    }

	cout << min;

}