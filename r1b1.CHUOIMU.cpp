#include <iostream>
#include <cmath>
using namespace std;

void Print() {
    long long k;
    cin >> k;
    
    long long n = 1;
    long long i = 0;

    do {
        n = n + i + 1;
        i = i + 1;
    } while (n < k);

    if (n == k || k == 1) {
        cout << 1;
    } else {
        cout << 0;
    }
}

int main() {
    Print();
    return 0;
}

