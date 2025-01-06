#include <iostream>
using namespace std;

int main() {
    int T, H, W, N;
    cin >> T;  // 테스트 케이스의 수 입력 받기

    while (T--) {
        cin >> H >> W >> N;
        int x = (N - 1) / H + 1;  // 열 번호 (1부터 시작)
        int y = (N - 1) % H + 1;  // 층 번호 (1부터 시작)

        cout << y;
        if (x < 10) cout << "0";  // 열 번호가 한 자리일 경우 앞에 0을 붙임
        cout << x << endl;
    }

    return 0;
}