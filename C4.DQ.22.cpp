#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double rad (int x) {
    return x/180.0 * 3.14159;
}

double S (int n, int x) {
    if (n == 1) return sin(rad(x)) + cos(rad(x));
    return sin(n*rad(x)) + cos(n*rad(x)) + S(n - 1, x);
}

int main () {
    cout.precision(3);
    int n, x; cin >> n >> x;
    cout << fixed << S(n, x);
    return 0;
}
