//MINIGAME24.2:SUM
#include <iostream>
using namespace std;

#define Modulo 1000000007

long long Tinh(long long n) {
    long long b_n = ((n % Modulo) * (n % Modulo)) % Modulo;

    return b_n;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        long long result = Tinh(n);
        cout << result << endl;
    }

    return 0;
}