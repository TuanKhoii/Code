#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int n;
double S (int i) {
    if (i == n) return sqrt(n);
    return sqrt(i + (S(i + 1)));
}

int main () {
    cout.precision(3);
    cin >> n;
    cout << fixed << S(1);
    return 0;
}
