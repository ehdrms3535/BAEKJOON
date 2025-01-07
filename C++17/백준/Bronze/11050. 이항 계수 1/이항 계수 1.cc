#include <iostream>

using namespace std;

int main() {

	int N, K;
	int cal = 1;
	cin >> N >> K;
    
	for (int i = 0; i < K; i++) cal *= N--;
	for (int j = 1; j <= K; j++) cal /= j;
	
	cout << cal;
}