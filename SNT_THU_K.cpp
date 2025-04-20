#include <iostream>
using namespace std;
int Prime[1299710];
void isPrime() {
    for(int i = 0; i <= 1300000; i++) {
        Prime[i] = 1;
    }
    Prime[0] = Prime[1] = 0;
    for(int i = 2; i * i <= 1300000; i++) {
        if(Prime[i]) {
            for(int j = i * i; j <= 1300000; j += i) {
                Prime[j] = 0;
            }
        }
    }
}
int main() {
    int k;
    cin >> k;
    isPrime();
    int count = 0;
    for(int i = 0; i <= 1299709; i++) {
        if(Prime[i]) count++;
        if(count == k) {
            cout << i;
            return 0;
        }
    }
    return 0;
}