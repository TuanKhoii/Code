#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S (int n) {
    if (n == 1) return 1;
    return sqrt(n + S(n - 1));
}

int main () {
    cout.precision(4);
    int n; cin >> n;
    cout << S(n);
    return 0;
}
