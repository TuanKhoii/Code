#include <iostream>
#include <iomanip>

using namespace std;

double S (int n) {
    if (n == 1) return 0.5;
    return n*1.0/(n + 1) + S(n - 1);
}

int main () {
    cout.precision(3);
    int n; cin >> n;
    cout << fixed << S(n);
    return 0;
}
