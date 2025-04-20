using namespace std;
#include<bits/stdc++.h>
#define st first
#define nd second
#define FORE(i,a,b) for(int i=(a),b_=(b);i<=b_;++i)
#define FORD(i,a,b) for(int i=(a),b_=(b);i>=b_;--i)
#define TR(c, it) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++)

const long long MOD = 1e9 + 7 ;
const int MAXN = 1e7 + 1 ;
const int N = 1e7 ;
long long f[MAXN] ;
long long power(long long a, long long n)
{
    long long res = 1 ;
    while(n)
    {
        if (n & 1) res = (res * a) % MOD ;
        a = (a * a) % MOD ;
        n >>= 1 ;
    }
    return res ;
}
int main()
{
#define TASK "NAME"
    // freopen(TASK".inp","r",stdin);
    // freopen(TASK".out","w",stdout);
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    FORE(i , 4 , N)
    {
        f[i] += (f[i - 1] * (2 * i + 1) ) % MOD * power(i + 2 , MOD - 2) ; f[i] %= MOD ;
        f[i] += (f[i - 2] * (3 * i - 3) ) % MOD * power(i + 2 , MOD - 2) ; f[i] %= MOD ;
    }
    int T ;
    scanf("%d",&T) ;
    while(T--){
        int n ;
        scanf("%d",&n) ;
        printf("%lld\n",f[n]);
    }



    return 0;
}
