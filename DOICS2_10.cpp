#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long n;
    int a = 0 , i , tong = 0;
    cin >> n;
    while(n) {
        i = n % 10;
        tong += i * pow(2 , a);
        n /= 10;
        a++;
    }
    cout << tong;
    return 0;
}