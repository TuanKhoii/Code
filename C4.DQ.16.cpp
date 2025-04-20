#include <iostream>
#include <iomanip>

using namespace std;

long long factorial (int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

long long pow (int a, int b) {
    if (b == 0) return 1;
    return a * pow(a, b - 1);
}

double S (int n, int x) {
    if (n == 0) return 1;
    return 1.0*pow(x, 2*n)/factorial(2*n) + S(n - 1, x);
}

int main () {
    int n, x; cin >> n >> x;
    cout << fixed << setprecision(3) << S(n, x);
    return 0;
}
