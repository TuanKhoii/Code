#include <iostream>

using namespace std;

struct PhanSo {
    int a, b;
    friend istream& operator>>(istream &is, PhanSo &p) {
        is >> p.a >> p.b;
        return is;
    }
    friend ostream& operator<< (ostream &os, PhanSo p) {
        os << p.a << '/' << p.b << endl;
        return os;
    }
    PhanSo& operator++ () {
        this->a++;
        return *this;
    }
    PhanSo& operator-- (){
        this->a--;
        return *this;
    }
};

int main () {
    PhanSo p;
    string pt;
    cin >> p;
    cin >> pt;
    cout << p;
    pt == "++" ? cout << ++p : cout << --p;
    return 0;
}