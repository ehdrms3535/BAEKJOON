#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, data, max = 0;;
    cin >> N;
    vector<int> arr;
    arr.reserve(N);
    for (int i = 0; i < N; i++) {
        cin >> data;
        max = (max < data) ? data : max;
        arr.push_back(data);
    }

    sort(arr.begin(), arr.end());

    cin >> M;
    int* arr2 = new int[M];

    for (int j = 0; j < M; j++) {
        cin >> data;
        arr2[j] = (binary_search(arr.begin(), arr.end(), data)) ? 1 : 0;
    }
    for (int i = 0; i < M;i++) {
        cout << arr2[i] << '\n';
    }
}