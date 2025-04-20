//R5.6:PYTAGO2
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a;
    cin >> a;

    // Tìm b và c
    long long b, c;
    if (a % 2 == 0) {
        b = (a * a / 4) - 1;
        c = b + 2;
    } else {
        b = (a * a - 1) / 2;
        c = b + 1;
    }

    // Kiểm tra nếu tồn tại bộ 3 số Pytago
    if (a < b && b < c && a * a + b * b == c * c) {
        cout << b << " " << c;
    } else {
        cout << -1;
    }

    return 0;
}