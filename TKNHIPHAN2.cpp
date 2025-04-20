#include <iostream>
using namespace std;

// Hàm tìm kiếm tất cả các vị trí của giá trị x trong mảng
void TimKiem(int a[], int n, int x) {
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1";
    }
}

int main() {
    int n, x, a[100];
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    TimKiem(a, n, x);

    return 0;
}