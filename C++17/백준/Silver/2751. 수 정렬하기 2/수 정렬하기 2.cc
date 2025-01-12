#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, data;
    cin >> N;
    vector<int> arr;
    arr.reserve(N);  // 미리 메모리 할당

    unordered_set<int> arr2;  // 중복 제거용

    for (int i = 0; i < N; i++) {
        cin >> data;
        arr2.insert(data);  // 중복 제거하면서 데이터 추가
    }

    arr.assign(arr2.begin(), arr2.end());  // set의 요소를 벡터로 복사
    sort(arr.begin(), arr.end());  // 벡터 정렬

    for (int elem : arr) {
        cout << elem << '\n';  // 정렬된 요소 출력
    }
    return 0;
}
