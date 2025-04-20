#include <iostream>
using namespace std;

typedef long long ll;

ll add(ll a, ll b, ll m) {
    return (a%m + b%m) % m;
}

ll mul(ll a, ll b, ll m) {
    ll res = 0;
    a %= m;
    b %= m;
    while (b != 0) {
        if (b % 2 == 1) {
            res = add(res, a, m);
        }
        a = add(a, a, m);
        b /= 2;
    }
    return res;
}

ll Pow(ll a, ll n, ll m) {
    ll res = 1;
    a %= m;
    while (n != 0) {
        if (n % 2 == 1) {
            res = mul(res, a, m);
        }
        a = mul(a, a, m);
        n /= 2;
    }
    return res;
}

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;
    cout << 10 * mul(a, Pow(10, k - 1, b), b) / b << endl;
}

int main() {
    solve();
    return 0;
}
