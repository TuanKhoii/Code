#include <iostream>

using namespace std;

// Hàm tính (a * b) % mod mà tránh tràn số
long long multiplyMod(long long a, long long b, long long mod) {
    long long result = 0;
    a %= mod;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result + a) % mod;
        }

        a = (a * 2) % mod;
        b /= 2;
    }

    return result;
}

// Hàm tính a^n % mod mà tránh tràn số
long long powerMod(long long a, long long n, long long mod) {
    long long result = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            result = multiplyMod(result, a, mod);
        }

        a = multiplyMod(a, a, mod);
        n /= 2;
    }

    return result;
}

int main() {
    long long a, n;
    cin >> a >> n;

    const long long MOD = 100;  // Số modulo để lấy hai chữ số cuối cùng

    // Tính a^n mod MOD
    long long result = powerMod(a, n, MOD);

    // Xuất ra hai chữ số cuối cùng của kết quả
    cout << result / 10 << result % 10 << endl;

    return 0;
}