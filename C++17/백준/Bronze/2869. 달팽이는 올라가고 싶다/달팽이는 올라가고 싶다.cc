#include <iostream>
using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;

    if (A >= V) {
        cout << 1;
        return 0;
    }

    long long sub = A - B;
    long long distance = V - A;

    if (distance % sub == 0) {
        cout << distance / sub + 1;
    }
    else {
        cout << distance / sub + 2;
    }

    return 0;
}