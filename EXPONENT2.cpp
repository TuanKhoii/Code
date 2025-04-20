//MINIGAME37.1:EXPONENT2
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

string toBinaryString(ll N) {
    if (N == 0) return "0";
    string result;
    while (N > 0) {
        result = char((N % 2) + '0') + result;
        N /= 2;
    }
    return result;
}
bool isPowOf2(ll n){
    return (n != 0 && (n & (n - 1)) == 0);
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        ll n;
        cin >> n;
        if(isPowOf2(n)) {
            ll p = log2(n);
            cout << "YES 2^" << p << '\n';
        }
        else cout << "NO " << toBinaryString(n) << '\n';
    }
    return 0;
}