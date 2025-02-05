#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, data;
    cin >> N;

    int temp = N, digits = 0;

    while (temp) {
        digits++;
        temp /= 10;
    }

    int start = N - 9 * digits;

    if (start < 1) {
        start = 1;  
    }

    for (int i = start; i < N; i++) {
        sum = i;
        data = i;

        while (data) {
            sum += data % 10;
            data /= 10;
        }

        if (sum == N) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
