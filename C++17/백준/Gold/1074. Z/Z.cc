#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	double N, T, R,row,col,count=0;
	cin >> N >> T >> R;
	row = col = pow(2, N);
	vector<int> arr;

	double j = 1, i = 1;
	int size = row;
	for (;size>1;) {

		size /= 2;

		if (T >= size) {
			T -= size;
			if (R >= size) {
				R -= size;
				arr.push_back(4);
			}
			else {
				arr.push_back(3);
			}
		}
		else {
			if (R >= size) {
				R -= size;
				arr.push_back(2);
			}
			else {
				arr.push_back(1);
			}
		}
	}

	int a = 0;
	int b = 2;
	for (int i = 0; i < arr.size(); i++) {
		//cout << arr[i] << " ";
		a += (arr[i] - 1) * row * row / 4;
		//cout << a << '\n';
		row /= 2;
	}

	cout << a;
}