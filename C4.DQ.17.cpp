#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S (int n) {
    if (n == 1) return sqrt(2);
    return sqrt(2 + S(n - 1));
}

int main () {
    int n; cin >> n;
    cout << fixed << setprecision(3) << S(n);
    return 0;
}
