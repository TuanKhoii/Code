#include <iostream>

using namespace std;

long long T (int n) {
    if (n <= 1) return 1;
    return n * T(n - 1);
}

long long S (int n) {
    if (n == 1) return 1;
    return T(n) + S(n - 1);
}

int main () {
    int n; cin >> n;
    cout << S(n);
}
