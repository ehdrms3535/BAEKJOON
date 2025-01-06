#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,count=0;
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		cin >> N;
		if (find(vec.begin(), vec.end(), N%42) != vec.end()) {
			continue;
		}
		else {
			vec.push_back(N%42);
			count++;
		}
	}
	cout << count;
}