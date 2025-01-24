#include <iostream>
#include <climits>
using namespace std;

int main() {
	int N,i,count = 0,min=INT_MAX;
	cin >> N;

	for (i = 0; i*5 <= N;i++) {
		count = i;
		if ((N - 5*i) % 3 == 0) {
			count = i + (N - 5*i) / 3;
			min = (min > count) ? count : min;
		}
	}
	
	if (min != INT_MAX) cout << min;
	else cout << -1;
}