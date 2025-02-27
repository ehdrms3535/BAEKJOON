#include <iostream>
#include <vector>

using namespace std;

void rgb(vector<string>& arr, int i, int j, char text, bool check) {
    if (arr[i][j] != text && (check || text == 'B')) return;

    arr[i][j] = '0'; // 방문한 칸을 '0'으로 변경 (즉, "방문 표시")

    int dx[] = { 1, -1, 0, 0 };
    int dy[] = { 0, 0, 1, -1 };

    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];

        if ((!check && (text != 'B' && (arr[ni][nj] == 'R' || arr[ni][nj] == 'G'))) || arr[ni][nj] == text) {
            rgb(arr, ni, nj, text, check);
        }
    }
}

void find(vector<string>& arr, int& count, bool check) {
    int N = arr.size() - 2;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (arr[i][j] != '0' && arr[i][j] != '*') {
                count++;
                rgb(arr, i, j, arr[i][j], check);
            }
        }
    }
}

int main() {
    int N, count1 = 0, count2 = 0;
    cin >> N;

    vector<string> arr(N + 2, string(N + 2, '*'));
    vector<string> temp(N + 2, string(N + 2, '*'));

    for (int i = 1; i <= N; i++) {
        string row;
        cin >> row;
        arr[i] = "*" + row + "*";
    }

    temp = arr;  // 💡 깊은 복사 수행 (이전에는 안 했음!)

    find(arr, count1, true);
    find(temp, count2, false);

    cout << count1 << " " << count2;
    return 0;
}
