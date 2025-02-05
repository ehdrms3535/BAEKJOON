#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


struct node {
	int age;
	string name;
};

bool cmp(const node& a, const node& b) {
	if (a.age == b.age) {
		return false;
	}
	return a.age < b.age;
}


int main() {
	int N;
	cin >> N;
	
	node* arr = new node[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i].age >> arr[i].name;
	}

	stable_sort(arr, arr+N ,cmp);
	
	for (int i = 0; i < N; i++) {
		cout << arr[i].age << " " << arr[i].name << '\n';
	}

	delete[] arr;
	return 0;
}