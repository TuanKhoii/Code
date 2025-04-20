#include <iostream>

using namespace std;

int catalan (int n) {
    if (n <= 1) return 1;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += catalan(i) * catalan(n - i - 1);
    }
    return total;
}

int main () {
    int n;
    while (cin >> n) cout << catalan(n) << '\n';
    return 0;
}
