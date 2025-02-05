#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct node {
	int data = 0;
	int count = 0;
};

bool find(node* A, int data, int i, int& j) {
	for (; j < i; j++) {
		if (data == A[j].data) {
			return true;
		}
	}
	return false;
}

bool cmp(const node& p1, const node& p2) {
	//if (p1.data == 0 && p2.data == 0) return false;
	//else if (p1.data == 0) return false;
	//else if (p2.data == 0) return true;	
	return p1.data < p2.data;
}

int main() {
	int N, data, datacount = 0, i = 0;
	cin >> N;

	node* arr = new node[10001];

	for (i = 0; i < N; i++) {
		cin >> data;
		arr[data].count++;
		datacount++;		
	}

	//sort(arr, arr + i, cmp);

	for (int k = 1; k<10001; k++) {
		if (arr[k].count == 0) continue;
		for (int k1 = 0; k1 < arr[k].count; k1++) {
			cout << k << '\n';
		}
	}
}