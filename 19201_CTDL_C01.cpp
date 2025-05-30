#include <bits/stdc++.h>
using namespace std;

struct info {
    string maSo, tenSach;
    int soLuong;
    double giaTien;
};

istream &operator >> (istream &in, info &f) {
    in >> f.maSo >> f.tenSach >> f.soLuong >> f.giaTien;
    return in;
}

ostream &operator << (ostream &out, info f) {
    out << f.maSo << '|' << f.tenSach << '|' << f.soLuong << '|' << f.giaTien;
    return out;
}

int find(info f[], int n, int soLuong) {
    for (int i = 0; i < n; i++)
        if (f[i].soLuong == soLuong)
            return i;
    return -1;
}

int main() {
    int n;
    info f[100];
    int soLuong;
    
    cin >> n >> soLuong;
    for (int i = 0; i < n; i++)
        cin >> f[i];
    
    int idx = find(f, n, soLuong);
    
    if (idx != -1) {
        f[idx].soLuong++;
        cout << idx << '\n';
        cout << f[idx];
    } else 
        cout << idx;
    
    return 0;
}