#include <iostream>
#include <cmath>
using namespace std;

void XuatDaThuc(int a[], int mu[], int n) {
    bool firstTerm = true;
    for(int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            if (!firstTerm && a[i] > 0) cout << " + ";
            if (a[i] < 0) cout << " - ";
            if (abs(a[i]) != 1 || mu[i] == 0) cout << abs(a[i]);
            if (mu[i] != 0) {
                cout << "x";
                if (mu[i] != 1) cout << "^" << mu[i];
            }
            firstTerm = false;
        }
    }
}

int TinhDaThuc(int a[], int mu[], int n, int x) {
    int result = 0;
    for(int i = 0; i < n; ++i) {
        result += a[i] * pow(x, mu[i]);
    }
    return result;
}

void DaoHam(int a[], int mu[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= mu[i];
        mu[i]--;
    }
}

int main() {
    int n;
    cin >> n;

    int a[1000];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int mu[1000];
    for(int i = 0; i < n; i++) {
        cin >> mu[i];
    }

    int x;
    cin >> x;

    XuatDaThuc(a, mu, n);
    cout << endl;

    int result = TinhDaThuc(a, mu, n, x);
    cout << result << endl;

    DaoHam(a, mu, n);
    XuatDaThuc(a, mu, n);

    return 0;
}
