#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int limit, bool Prime[]) {
    for(int i = 0; i <= limit; i++) {
        Prime[i] = true;
    }
    Prime[0] = Prime[1] = false;
    for(int i = 2; i * i <= limit; i++) {
        if(Prime[i]) {
            for(int j = i * i; j <= limit; j += i) {
                Prime[j] = false;
            }
        }
    }
}

void AnalysisPrime(int arr[] , int n, bool Prime[]) {
    int maxFactor = 0;
    for(int i = 2; i <= sqrt(n); ++i) {
        if(Prime[i]) {
            while(n % i == 0 && n != 0) {
                arr[i]++;
                n /= i;
                maxFactor = i;
            }
            if(n == 0) break;
        }
    }
    for(int i = 2; i <= maxFactor; ++i) {
        if(arr[i] != 0) {
            cout << i << '^' << arr[i];
            if(i != maxFactor)
                cout << '*';
        }
    }
    if(n > 1) {
        if(maxFactor > 0)
            cout << '*';
        cout << n << '^' << 1;
    }
}

int main() {
    int n;
    cin >> n;
    const int limit = sqrt(n) + 1;
    bool Prime[limit];
    int arr[limit] = {0};
    isPrime(limit, Prime);
    AnalysisPrime(arr , n, Prime);
    return 0;
}
