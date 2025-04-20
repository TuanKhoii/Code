#include<iostream>
using namespace std;
int GCD(int a, int b) {
    int d;
    while(b) {
        d = a % b;
        a = b;
        b = d;
    }
    return a;
}
int main() {
    int a , b = 0 ;
    cin >> a;
    int c = a;
    int d;
    while(c) {
        d = c % 10;
        b = b * 10 + d;
        c /= 10;
    }
    if(GCD(a , b) == 1) cout << "YES";
    else cout << "NO";
    return 0;
}