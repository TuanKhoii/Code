#include <iostream>
using namespace std;
struct PhanSo {
    int tu , mau;
};
int gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
void RutGon(PhanSo &a) {
    int ucln = gcd(a.tu , a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
}

void Sort(PhanSo arr[] , int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i].tu * arr[j].mau > arr[j].tu * arr[i].mau) {
                swap(arr[i] , arr[j]);
            }
        }
    }
}
void Print(PhanSo arr[]) {
    cout << arr[0].tu << "/" << arr[0].mau;
}
int main() {
    PhanSo arr[100];
    int t , p , x = 0; 
    while(cin >> t >> p) {
        PhanSo a;
        a.tu = t;
        a.mau = p;
        RutGon(a);
        arr[x] = a;
        x++;
    }
    Sort(arr , x);
    Print(arr);
    return 0;
}