#include <iostream>
using namespace std;

int ucln(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo {
public:
    int tu, mau;
public:
    friend istream& operator>>(istream& is, PhanSo& a) {
        is >> a.tu >> a.mau;
        return is;
    }
    friend ostream& operator<<(ostream& os, const PhanSo& a) {
        PhanSo temp = a; 
        if (temp.mau < 0) {
            temp.tu *= -1;
            temp.mau *= -1;
        }
        os << temp.tu << '/' << temp.mau;
        return os;
    }
    PhanSo operator+(const PhanSo& a) const {
        PhanSo temp;
        temp.tu = a.tu * mau + a.mau * tu;
        temp.mau = mau * a.mau;
        return temp;
    }
    void RutGon() {
        int gcd = ucln(abs(tu), abs(mau));
        tu /= gcd;
        mau /= gcd;
    }
};

class HonSo : public PhanSo {
    int nguyen;

public:
    HonSo() {
        nguyen = 0;
    }
    HonSo(int i, int x, int y) {
        nguyen = i;
        tu = x;
        mau = y;
    }
    HonSo sim() {
        HonSo h = *this;
        int i = ucln(abs(h.tu),abs(h.mau));
            h.tu /= i;
            h.mau /= i;
        return h;
    }
    friend HonSo operator+(HonSo h1, HonSo h2) {
        if (h1.mau < 0) {
            h1.tu *= -1;
            h1.mau *= -1;
        }
        if (h1.nguyen < 0 && h1.tu > 0)
            h1.tu *= -1;
        if (h2.mau < 0) {
            h2.tu *= -1;
            h2.mau *= -1;
        }
        if (h2.nguyen < 0 && h2.tu > 0)
            h2.tu *= -1;
        h1.nguyen += h2.nguyen;
        h1.tu = h1.tu * h2.mau + h1.mau * h2.tu;
        h1.mau *= h2.mau;
        return h1.sim();
    }
    friend istream& operator>>(istream& is, HonSo& h) {
        is >> h.nguyen >> h.tu >> h.mau;
        return is;
    }
    friend ostream& operator<<(ostream& os, HonSo h) {
        os << h.nguyen << ' ' << h.tu << '/' << h.mau;
        return os;
    }
};

int main() {
    HonSo a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
