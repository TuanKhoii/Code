#include <iostream>
using namespace std;

const int MAXN = 1000001;
long long isPrime[MAXN];
void sieve() {
    for (int i = 2; i < MAXN; i++) {
        isPrime[i] = true;
    }
        for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 3; i <= 500000; i = i + 2)
    {
        if (isPrime[i] == 1)
        {
            for (int j = 2*i; j <= 1000000 ; j = j + i)
            {
                isPrime[j] = i;
            }
        }
    }
}

int main() {
    sieve();
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime[i] && isPrime[i] * isPrime[i] > i) {
            cout << i << "\n";
        }
    }
    
    return 0;
}
