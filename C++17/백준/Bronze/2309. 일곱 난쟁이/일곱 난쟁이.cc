#include <iostream>

using namespace std;

void quickSort(int* data, int start, int end) {
    if (start >= end) return;
    int pivot = start; // 기준 값
    int i = start + 1;
    int j = end;

    while (i <= j) {
        while (i <= end && data[i] <= data[pivot]) i++;
        while (j > start && data[j] >= data[pivot]) j--;
        if (i > j) {
            int temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else {
            int temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main() {
    int arr[9];
    int arr2[7]; // 수정: 정확히 7개의 요소를 저장할 공간
    bool found = false;
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (arr[i] + arr[j]) == 100) {
                int index = 0;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        arr2[index++] = arr[k];
                    }
                }
                quickSort(arr2, 0, 6); // 수정: 올바른 범위
                for (int l = 0; l < 7; l++) {
                    cout << arr2[l] << endl;
                }
                found = true;
                break;
            }
        }
        if (found) break;
    }
}
