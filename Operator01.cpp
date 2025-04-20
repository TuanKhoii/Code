#include <iostream>
using namespace std;
int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct PhanSo {
    int tu, mau;
    bool operator < (const PhanSo &p) {
        return tu * p.mau > p.tu * mau;
    }
    void RutGon() {
        int gcd = ucln(tu, mau);
        tu /= gcd;
        mau /= gcd;
    }
};

void PrintPS(const PhanSo &p) {
    cout << p.tu << '/' << p.mau << ' ';
}
void Sort(PhanSo arr[] , int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(arr[i] < arr[j]) swap(arr[i] , arr[j]);
        }
    }
}
int main() {
    int n;
    cin >> n;
    PhanSo arr[1000];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i].tu >> arr[i].mau;
        arr[i].RutGon();
    }
    Sort(arr , n);
    for(int i = 0; i < n; ++i) {
        PrintPS(arr[i]);
    }
    return 0;
}