#include <iostream>
#include <algorithm>

using namespace std;

void sum(int* arr, int& max) {
    int T=0;
    int cal = 0;
    sort(arr, arr + 4);

    if (arr[0] == arr[3]) {
        T = arr[0];
        cal = 50000 + T * 5000;
    }
    else if(arr[0] == arr[2]||arr[1]==arr[3]) {
        T = arr[2];
        cal = 10000 + T * 1000;
    }
    else if (arr[0] == arr[1] || arr[1]==arr[2]) {
        if (arr[2] == arr[3]) {
            cal = 2000 + 500 * arr[1] + 500 * arr[3];
        }
        else if(arr[2]!=arr[3]) {
            T = arr[1];
            cal = 1000 + T * 100;
        }
        else {
            T = arr[1];
            cal = 1000 + T * 100;
        }
    }
    else if (arr[2] == arr[3]) {
        T = arr[3];
        cal = 1000 + T * 100;
    }
    else {
        cal = arr[3] * 100;
    }
    if (max < cal) max = cal;
}

int main() {
    int N;
    int max = 0;
    int arr[4];

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
        }
        sum(arr, max);
    }
    cout << max << endl;
    return 0;
}
