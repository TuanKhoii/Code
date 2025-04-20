#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

int fi(ii p) { return p.first; }
int se(ii p) { return p.second; }
ii mp(int a, int b) { return {a, b}; }

vector<int> vi;
vector<ii> vii;

void FOR(int x, int a, int b) {
 for (x = a; x <= b; x++) {}
}

void FOD(int x, int a, int b) {
 for (x = a; x >= b; x--) {}
}

void REP(int x, int a, int b) {
 for (x = a; x < b; x++) {}
}

void RED(int x, int a, int b) {
 for (x = a; x > b; x--) {}
}

const int MAX = 1e3 + 10;
const int MAXN = 1e6 + 10;
const int MOD = 1e9 + 7;
const int inf = 1e9;
const double pi = acos(-1.0);
const double eps = 1e-6;

inline ll mul(ll a, ll b) { return (a * b) % MOD; }

inline ll add(ll a, ll b) { return (a + b) % MOD; }

inline ll sub(ll a, ll b) { return (a - b + MOD) % MOD; }

ll sumFirstNCube(ll n) {
 ll m = n + 1;
 if (n & 1)
  m /= 2;
 else
  n /= 2;
 return mul(mul(n, n), mul(m, m));
}

ll sumFirstNSquare(ll n) {
 ll m = n + 1;
 ll k = 2 * n + 1;
 if (n & 1)
  m /= 2;
 else
  n /= 2;
 if (n % 3 == 0)
  n /= 3;
 else if (m % 3 == 0)
  m /= 3;
 else
  k /= 3;

 return mul(mul(n, m), k);
}

ll sumFirstN(ll n) {
 ll m = n + 1;
 if (n & 1)
  m /= 2;
 else
  n /= 2;
 return mul(n, m);
}

ll solve(ll r, ll c) {
 ll h = min(r, c) - 1;
 ll res = sumFirstNCube(h);
 res = sub(res, mul(add(r, c), sumFirstNSquare(h)));
 res = add(res, mul(mul(r, c), sumFirstN(h)));
 return res % MOD;
}
int main() {
  ios::sync_with_stdio(false);

  ll T, r, c;

  cin >> T;
  for (int testCase = 1; testCase <= T; testCase++) { // Descriptive variable name
    cin >> r >> c;
    cout << solve(r, c) << endl;
  }

  return 0;
}
