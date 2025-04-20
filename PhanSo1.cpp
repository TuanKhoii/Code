#include <iostream>
#include <cmath>
using namespace std;
struct PhanSo {
    int tu , mau;
};
int UCLN(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
PhanSo RutGon(PhanSo &c) {
    int d = UCLN(abs(c.tu), abs(c.mau));
    c.tu /= d;
    c.mau /= d;
    return c;
}
PhanSo Cong(const PhanSo &a, const PhanSo &b) {
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return RutGon(c);
}
void Print(const PhanSo &a) {
    cout << a.tu << "/" << a.mau;
}
int main() {
    PhanSo a, b;
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;

    if (a.mau == 0 || b.mau == 0) {
        cout << -1;
    }
    else {
        Print(Cong(a , b));
    }
    return 0;
}