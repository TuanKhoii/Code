#include <iostream>
#include <iomanip>

using namespace std;

double dequy (int n) {
    if (n == 0) return 0.5;
    return (2*n + 1.0)/(2*n + 2) + dequy(n - 1);
}

int main () {
    cout.precision(3);
    int n; cin >> n;
    cout << fixed << dequy(n);
    return 0;
}
