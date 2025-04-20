#include <iostream>

using namespace std;

//1. Sử dụng hàm đệ quy

int S (int n) {
    if (n == 1) return 1;
    return n*n + S(n - 1);
}

int main () {
    int n; cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    cout << S(n);
    return 0;
}
