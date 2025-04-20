// 1. Nhap
// 	2.  Xuat
#include <iostream>
using namespace std;
int main() {
    string s , arr[101];
    double diem , a[101];
    char c;
    int i = 0;
    while(cin >> s >> diem >> c) {
        arr[i] = s;
        a[i] = diem;
        ++i;
        if(c == 'K') break;
    }
    for(int b = 0; b < i; ++b) {
        if(a[b] < 5) {
            cout << arr[b] << ' ' << a[b] << endl;
        }
    }
    return 0;
}