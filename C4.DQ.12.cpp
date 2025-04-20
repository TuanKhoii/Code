#include <iostream>

using namespace std;

long long T (int n, int x) {
    if (n == 0) return 1;
    return x * T(n - 1, x);
}

long long S (int n, int x) {
    if (n == 1) return x;
    return T(n, x) + S(n - 1, x);
}

int main () {
    int n, x; cin >> n >> x;
    cout << S(n, x);
}
