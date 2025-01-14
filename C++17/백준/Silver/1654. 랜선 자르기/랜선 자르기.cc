#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

long long findMaxPiece(int N, int M, long long* arr) {
    long long max = 0;
    for (int i = 0; i < N; ++i) {
        max = std::max(max, arr[i]);  // 배열에서 최대 요소 찾기
    }
    
    long long low = 1, high = max, best = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long count = 0;
        
        for (int i = 0; i < N; ++i) {
            count += arr[i] / mid;  // mid 길이로 자를 수 있는 부분의 수 계산
        }
        
        if (count >= M) {  // 최소 M 개의 부분을 자를 수 있다면
            best = mid;   // 최대 길이 업데이트
            low = mid + 1;  // 더 큰 길이 시도
        } else {
            high = mid - 1;  // 더 작은 길이 시도
        }
    }
    
    return best;
}

int main() {
    int N, M;
    cin >> N >> M;
    long long* arr = new long long[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long result = findMaxPiece(N, M, arr);
    cout << result << endl;

    delete[] arr;  // 동적 할당된 메모리 해제
    return 0;
}
