#include <iostream>

using namespace std;

long long pow (int a, int b) {
    if (b == 0) return 1;
    return a * (pow(a, b - 1));
}

long long S (int n, int x) {
    if (n == 1) return pow(x, 2);
    return pow(x, 2*n) + S(n - 1, x);
}

int main () {
    int n, x; cin >> n >> x;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    cout << S(n, x);
    return 0;
}
