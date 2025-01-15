#include <iostream>
#include <vector>
using namespace std;

int main() {
	int M;
	int N, T = 0;
	cin >> M;
	vector<vector<int>> arr(M, vector<int>(3,0));
	for (int i = 0; i < M; i++) {
		cin >> N >> T;
		arr[i][0]=N;
		arr[i][1]=T;
	}
	for (int i = 0; i < M; i++) {
		int count = 0;
		for (int j = 0; j < M; j++) {
			if (arr[i][0] < arr[j][0]) {
				if (arr[i][1] < arr[j][1]) {
					count++;
				}
			}
		}
		arr[i][2] = count;
	}

	for (int i = 0; i < M; i++) {
		cout << arr[i][2]+1 << ' ';
	}
}