#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find(int **numberlist, int width, int height, int &x, int &y) {
	
	for (; x < width + 2; x++) {
		for (; y < height + 2; y++) {
			if (numberlist[x][y] == 1) {
				return;
			}
		}
		y = 1;
	}

}

void finding(int **numberlist, int x, int y, int& count, int width, int height) {
	
	if (x>= width-1 || y>= height-1 || x< 0 || y< 0) return;

	if (numberlist[x][y] == 1) {
		numberlist[x][y] = 0;
		count++;

		finding(numberlist, x - 1, y, count, width, height);
		finding(numberlist, x + 1, y, count, width, height);
		finding(numberlist, x, y - 1, count, width, height);
		finding(numberlist, x, y + 1, count, width, height);
	}
}


int main() {

	int width, height, i, j;
	int x = 1, y = 1;
	int data;
	int count = 0;

	vector<int> a;
	cin >> width >> height;


	int** numberlist = new int* [width + 2];

	for (i = 0; i < width + 2; i++) {
		numberlist[i] = new int[height + 2];
	}
	for (i = 0; i < width + 2; i++) {
		for (j = 0; j < height + 2; j++) {
			if (i == 0 || j == 0 || i == width + 1 || j == height + 1) {
				numberlist[i][j] = 0;
				continue;
			}
			cin >> data;
			numberlist[i][j]= data;
		}
	}
	while (true) {
		//if (width == 0 || height == 0) break;
		find(numberlist, width, height, x, y);
		finding(numberlist, x, y, count, width + 2, height + 2);
		if (x == width + 2) break;
		a.push_back(count);
		count = 0;
	}
	cout << a.size() << endl;
	if (width == 0 || height == 0 || a.size() == 0) cout << 0;
	else cout << *max_element(a.begin(), a.end());
}

