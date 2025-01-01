#include <iostream>
#include <vector>
using namespace std;


int main() {
	int a,i,j,countx=0,county=0;
	int xx = 0;
	int yy = 0;

	cin >> a;
	
	vector<vector<char>> arr(a + 2, vector<char>(a + 2, 'X'));

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			cin >> arr[i][j];
		}

	}
/*
	for (i = 0; i < a + 2; i++) {
		for (j = 0; j < a + 2; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
*/
	for (i = 0; i < a+2; i++) {
		countx = 0;
		for (j = 0; j < a+2; j++) {
			if (arr[i][j] == '.') {
				countx++;
			}
			else {
				if (countx >= 2) {
					xx++;
				}
				countx = 0;
			}	
		}
		if (countx >= 2) {
			xx++;
		}
	}

	for (j = 0; j < a+2; j++) {
		county = 0;
		for (i = 0; i < a+2; i++) {
			if (arr[i][j] == '.') {
				county++;
			}
			else{				
				if (county >= 2) {
					yy++;
				}
				county = 0;

			}
		}
		if (county >= 2) {
			yy++;
		}

	}

	cout << xx << " " << yy;

}

