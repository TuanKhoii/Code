#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int gcd(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void RutGon(PhanSo& ps) {
    int d = gcd(ps.tu, ps.mau);
    ps.tu /= d;
    ps.mau /= d;
}

void NhapPhanSo(PhanSo& ps) {
    cin >> ps.tu >> ps.mau;
}

void XuatPhanSo(const PhanSo& ps) {
    cout << ps.tu << "/" << ps.mau;
}

int main() {
    int n;
    cin >> n;

    PhanSo arr[100];
    for (int i = 0; i < n; i++) {
        NhapPhanSo(arr[i]);
        RutGon(arr[i]);
    }

    PhanSo minPhanSo = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i].tu * minPhanSo.mau < minPhanSo.tu * arr[i].mau) {
            minPhanSo = arr[i];
        }
    }

    XuatPhanSo(minPhanSo);

    return 0;
}