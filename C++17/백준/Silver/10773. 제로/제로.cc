#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	int N,data;
	cin >> N;
	vector<int> arr;

	for (int i = 0; i < N; i++) {
		cin >> data;
		if (data == 0) {
			arr.erase(arr.end()-1);
		}
		else arr.push_back(data);
	}

	cout << accumulate(arr.begin(), arr.end(),0);
}