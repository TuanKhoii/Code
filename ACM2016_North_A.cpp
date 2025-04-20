#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define REP(i,a) for (int i = 0; i < a; i++)
#define REPD(i,a) for (int i = a; i > 0; i--)
 
#define ll long long
#define fi first
#define se second
 
typedef pair<int, int> pii;
typedef pair< ll, ll > pll;
 
#define inf 0x3f3f3f3f
#define linf 0x3f3f3f3f3f3f3f3fLL
 
#define debug(x) { cout << "---> " << #x << " = " << x << endl;  }
#define sqr(x) ((x)*(x))
#define all(x) x.begin(), x.end()
 
const int MN = 1e5+5;

string NumberToString ( ll Number ) {
    ostringstream ss;
    ss << Number;
    return ss.str();
}

ll StringToNumber ( const string &Text ) {
    istringstream ss(Text);
    ll result;
    return ss >> result ? result : 0;
}

int a[1010], n, k;

int pow_(int x, int n, int md) {
    int t = 1 % md;
    for(; n; n >>= 1) {
        if (n & 1) t = (1LL * t * x) % md;
        x = (1LL * x * x) % md;
    }
    return t;
}

int phi(ll x) {
    if(x == 1) return 1;
    int ans = x;
    for (int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            ans -= (ans/i);
            while(x % i == 0) {
                x /= i;
            }
        }
    }
    if(x > 1) {
        ans -= ans/x;
    }
    return ans;
}

ll calc(int pos, int mod, bool &add) {
    if(a[pos] >= mod) add = true;
    if(a[pos] == 1) return a[pos] % mod;
    if(mod == 1) return 0;
    if(mod == 2) {
        if(a[pos] & 1) return 1;
        return 0;
    }
    if(pos == n - 1) return a[pos] % mod;
    int p = phi(mod);
    int nPow = calc(pos+1, p, add);
    if(add == true) nPow += p;
    int ans = pow_(a[pos] % mod, nPow, mod);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--) {
        cin >> n >> k;
        REP(i,n) cin >> a[i];
        bool toAdd = false;
        ll ans = calc(0,k,toAdd);
        cout << ans << endl;
    }
    return 0;
}