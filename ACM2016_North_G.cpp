#include <bits/stdc++.h>
#define X first
#define Y second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair <int,int> ii;
typedef pair <int,ii> i_ii;
typedef vector <int> vi;
typedef vector <ii> vii;

const int maxn=102;
const ll MOD=1000000007;

int n,m,a[1002][1002],Res;

int main()
{
 //   freopen("nhap.inp", "r", stdin);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
        scanf("%d",&a[i][j]);
    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
        a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    Res = INT_MAX;
    for (int i = 1; i <= m-1; i++)
    for (int j = 1; j <= n-1; j++)
    {
        int Max,Min;
        int V1 = a[i][j];
        int V2 = a[m][j] - a[i][j];
        int V3 = a[i][n] - a[i][j];
        int V4 = a[m][n] - a[i][n] - a[m][j] + a[i][j];
        Max = max(max(V1,V2),max(V3,V4));
        Min = min(min(V1,V2),min(V3,V4));
        Res = min(Res,Max-Min);
   //     cout<<i<<"-"<<j<<"   "<<V1<<" "<<V2<<" "<<V3<<" "<<V4<<endl;
    }
    printf("%d\n",Res);
    return 0;
}
