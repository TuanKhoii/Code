#include <iostream>
using namespace std;
int main() {
    int n, tong = 0;
    while(cin >> n) {
        if(n == 0) break;
        tong += n;
    }
    tong %= 10;
    if(tong == 0) cout << "DEP";
    else if(tong == 5) cout << "TRUNG BINH";
    else cout << "XAU";
    return 0;
}