#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n < 2) return false;
    else{
        for(int i = 2; i*i <= n; i++)
            if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n , k , a[100] , x = 0;
    cin >> k;
    while(cin >> n) {
        a[x] = n;
        x++;
    }
    int max = -1;
    for(int i = 0; i < x; i++) {
        if(isPrime(a[i]) && a[i] <= k && a[i] > max) {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}