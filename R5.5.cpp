//R5.5:TONGSOLAP
#include <iostream>
using namespace std;

const int mod = 1000000 + 7;
const int MAX = 10000001;

long long a[MAX]; // Lưu giá trị của i chữ số 1
long long s[MAX]; // Lưu tổng của dãy số từ 1 đến i chữ số 1

void precompute() {
    a[1] = 1;
    s[1] = 1;
    for (int i = 2; i < MAX; i++) {
        a[i] = (a[i - 1] * 10 + 1) % mod;
        s[i] = (s[i - 1] + a[i]) % mod;
    }
}

long long Solve(int n, int k) {
    return (s[n] * k) % mod;
}

int main() {
    int t;
    cin >> t;

    precompute();

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << Solve(n, k) << endl;
    }

    return 0;
}
