#include <iostream>

using namespace std;

int main() {

	int a,b,N,i,j;
	cin >> a >> b;
	int** arr = new int*[a];
	for (i = 0; i < a; i++) {
		arr[i] = new int[b];
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> N;
			arr[i][j]+=N;
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}