#include <iostream>
using namespace std;
int Combination(int n, int k) {
    if (k == 0 || k == n) return 1;
    return Combination(n - 1, k) + Combination(n - 1, k - 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << Combination(n, k) ;
    return 0;
}