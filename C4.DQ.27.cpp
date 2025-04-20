#include <iostream>

using namespace std;

long long lastNum (long long n) {
    if (n < 10) return n;
    return lastNum(n % 10 + n / 10);
}

int main () {
    long long n; cin >> n;
    cout << lastNum(n);
    return 0;
}
