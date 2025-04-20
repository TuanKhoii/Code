//R6.4:Happy

#include <iostream>

using namespace std;

long long C (int n, int k) {
    if (k == n) return 1;
    if (k == 1) return n;
    return C(n - 1, k) + C(n - 1, k - 1);
}

int main () {
    int n; cin >> n;
    long long res = (long long)n * (n - 1) * (n - 2) * (n - 3) * (n - 4) * C(n, 5);
    cout << res;
    return 0;
}