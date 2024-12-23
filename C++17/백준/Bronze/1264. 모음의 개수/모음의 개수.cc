#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count(const string s, const vector<char> v) {
	int count = 0;
	for (char ch : s) {
		if ((find(v.begin(), v.end(), ch) != v.end())||(find(v.begin(),v.end(),ch+32) != v.end())){
			count++;
		}
	}
	return count;
}


int main() {

	string s;
	vector<char> v = {'a','i','u','e','o'};
	while (true) {
		getline(cin,s);
		if(s=="#") break;
		cout << count(s,v) << endl;
	}
}