#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[n - 1][i] << " ";
    }

    return 0;
}
