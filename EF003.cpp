//MINIGAME37.2:EF003
#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[500];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1 || isPrime(arr[i])) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
