#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    int x, y;
};

struct TamGiac {
    Diem a, b, c;
};

istream& operator >> (istream& in, Diem &d) {
    in >> d.x >> d.y;
    return in;
}

ostream& operator << (ostream& out, Diem d) {
    out << "(" << d.x << "," << d.y << ")";
    return out;
}

istream& operator >> (istream& in, TamGiac &t) {
    in >> t.a >> t.b >> t.c;
    return in;
}

ostream& operator << (ostream& out, TamGiac t) {
    out << t.a << t.b << t.c;
    return out;
}

double khoangCach(Diem d1, Diem d2) {
    return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}

bool operator == (Diem d1, Diem d2) {
    return (d1.x == d2.x && d1.y == d2.y);
}

double chuVi(TamGiac t) {
    double ab, ac, bc;
    ab = khoangCach(t.a, t.b);
    ac = khoangCach(t.a, t.c);
    bc = khoangCach(t.b, t.c);
    return ab + ac + bc;
}

double operator + (TamGiac t1, TamGiac t2) {
    return chuVi(t1) + chuVi(t2);
}

bool operator < (TamGiac t1, TamGiac t2) {
    return (chuVi(t1) < chuVi(t2));
}

bool trung_nhau(Diem d1, Diem d2) {
    return d1.x == d2.x && d1.y == d2.y;
}

bool operator == (TamGiac t1, TamGiac t2) {
    Diem d1[3] = {t1.a, t1.b, t1.c};
    Diem d2[3] = {t2.a, t2.b, t2.c};
    int count = 0;
    int k = 3;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < k; j++) {
            if (trung_nhau(d1[i], d2[j])) {
                count++;
                d2[j] = d2[k - 1];
                k--;
                break;
            }
        }
    }
    return (count == 3);
}

int main() {
    TamGiac tg1, tg2;
    cin >> tg1 >> tg2;
    cout << tg1 << endl;
    cout << tg2 << endl;

    if (chuVi(tg1) < chuVi(tg2)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    if (tg1 == tg2) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}