#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 삽입 정렬 함수
void insertionSort(vector<vector<int>>& data, int start, int end, int index) {
    for (int i = start + 1; i <= end; i++) {
        vector<int> current = data[i];
        int j = i - 1;
        while (j >= start && data[j][index] > current[index]) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = current;
    }
}

// Median of three 피벗 선택
int medianOfThree(vector<vector<int>>& data, int start, int end, int index) {
    int mid = start + (end - start) / 2;
    if (data[start][index] > data[end][index])
        swap(data[start], data[end]);
    if (data[start][index] > data[mid][index])
        swap(data[start], data[mid]);
    if (data[mid][index] > data[end][index])
        swap(data[mid], data[end]);
    swap(data[mid], data[end - 1]);  // 피벗을 끝에서 두 번째 위치로 이동
    return data[end - 1][index];  // 피벗 반환
}

void quickSort(vector<vector<int>>& data, int start, int end, int index) {
    if (start >= end) return;
    if (end - start + 1 <= 10) {
        insertionSort(data, start, end, index);
        return;
    }

    int pivotValue = medianOfThree(data, start, end, index);
    int left = start;
    int right = end - 1;

    while (true) {
        while (data[++left][index] < pivotValue);
        while (data[--right][index] > pivotValue);
        if (left >= right) break;
        swap(data[left], data[right]);
    }
    swap(data[left], data[end - 1]);  // Restore pivot

    quickSort(data, start, left - 1, index);
    quickSort(data, left + 1, end, index);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, y;
    cin >> N;
    vector<vector<int>> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        arr[i] = { x, y };
    }
    sort(arr.begin(), arr.end());
    /*
    quickSort(arr, 0, N - 1, 0); 

    int t = 0;  
    for (int i = 0; i < N; i++) {
        if (i == N - 1 || arr[i][0] != arr[i + 1][0]) {
            quickSort(arr, t, i, 1);  
            t = i + 1;
        }
    }
    */
    for (const auto& p : arr) {
        cout << p[0] << " " << p[1] << '\n';
    }

    return 0;
}
