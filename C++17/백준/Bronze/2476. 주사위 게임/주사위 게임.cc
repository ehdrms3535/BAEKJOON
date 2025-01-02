#include <iostream>
#include <algorithm>

using namespace std;

void sum(int* arr, int& max) {
    int T;
    int cal = 0;
    sort(arr, arr + 3);
    if (arr[0] == arr[2]) { 
        T = arr[0];
        cal = 10000 + T * 1000;
    } else if (arr[0] == arr[1] || arr[1] == arr[2]) {
        T = arr[1]; 
        cal = 1000 + T * 100;
    } else {
        cal = arr[2] * 100; 
    }
    if (max < cal) max = cal;
}

int main() {
    int N;
    int max = 0;
    int arr[3];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
        }
        sum(arr, max);
    }
    cout << max << endl;
    return 0;
}
