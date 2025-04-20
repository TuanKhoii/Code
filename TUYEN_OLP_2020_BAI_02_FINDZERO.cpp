#include <bits/stdc++.h>
#define FORD(i,a,b) for (int i=(a), _b=(b); i >= _b; i--)
#define REP(i,a) for (int i=0, _a=(a); i<_a; ++i)
using namespace std;
const int MAXN=2e5+100;
int L[MAXN],R[MAXN],a[MAXN];
int main()
{
	int n;
	cin>>n;
	REP(i,n) scanf("%d",&a[i]),L[i]=!a[i]?i:!i?-2e7:L[i-1];
	FORD(i,n-1,0) R[i]=!a[i]?i:i==n-1?2e7:R[i+1];
	REP(i,n) printf("%d ",min(i-L[i],R[i]-i));
}