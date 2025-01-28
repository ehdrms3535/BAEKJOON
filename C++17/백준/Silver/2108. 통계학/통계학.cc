#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> arr(N);
    long long sum = 0; // 합이 int 범위를 넘을 수 있으므로 long long

    for(int i=0; i<N; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    // 1) 산술평균 (소수점 .5 이상이면 올림)
    int mean = (int)llround((long double)sum / N);

    // 2) 중앙값
    int median = arr[N/2];

    // 3) 최빈값 구하기
    //    방법 A) map을 이용
    map<int,int> freq;
    for(int x : arr){
        freq[x]++;
    }

    // freq에서 가장 많이 나온 횟수를 찾기
    int maxFreq = 0;
    for(auto &it : freq){
        maxFreq = max(maxFreq, it.second);
    }

    // maxFreq인 값들을 모두 모음
    vector<int> candidates;
    for(auto &it : freq){
        if(it.second == maxFreq){
            candidates.push_back(it.first);
        }
    }

    // 오름차순 정렬 (map 자체는 key 기준 오름차순이지만,
    // candidates에 넣은 뒤에도 정렬을 명시적으로 해주면 안전)
    sort(candidates.begin(), candidates.end());

    int modeVal; 
    if(candidates.size() == 1) {
        // 최빈값이 유일
        modeVal = candidates[0];
    } else {
        // 최빈값이 여러 개 -> 두 번째로 작은 값
        modeVal = candidates[1];
    }

    // 4) 범위
    int rangeVal = arr.back() - arr.front();

    // 출력 (문제 형식에 맞춤)
    cout << mean << "\n";
    cout << median << "\n";
    cout << modeVal << "\n";
    cout << rangeVal << "\n";

    return 0;
}
