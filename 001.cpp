//KiemTraNguyenTo
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n , a[100] , dem = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i])) {
            cout << a[i] << " ";
            dem++; }
    }
    if(dem == 0) cout << -1;
    return 0;
}