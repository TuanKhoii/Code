#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define M 1005000
#define MOD 1000000007
#define ii pair<ll, ll> 
#define fi first
#define se second

ll t, n, m, cnt, x[M], y[M];
map<ii, bool> mp;
bool mark[M];
vector<ll> e[M];
vector<ii> ans;

void dfs(int u, int p){
    mark[u] = 1;
    if (p != -1) mp[{p, u}] = 1;
    for (int v : e[u]){
        if (mark[v]) continue;
        dfs(v, u);
    }
}

void dfs2(int u, int p){
    mark[u] = 1;
    if (p != -1) mp[{u, p}] = 1;
    for (int v : e[u]){
        if (mark[v]) continue;
        dfs2(v, u);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> t;
    while (t--){
        cin >> n >> m;
        mp.clear();
        ans.clear();
        for (int i = 1; i <= n; i++) e[i].clear(), mark[i] = 0;
        for (int i = 1; i <= m; i++){
            cin >> x[i] >> y[i];
            e[x[i]].push_back(y[i]);
        }
        dfs(1, -1);
        for (int i = 1; i <= n; i++) e[i].clear(), mark[i] = 0;
        for (int i = 1; i <= m; i++) e[y[i]].push_back(x[i]);
        dfs2(1, -1);
        cnt = m - 2*n;
        for (int i = 1; i <= m; i++){
            if (cnt == 0) break;
            if (!mp[{x[i], y[i]}]) cnt--, ans.push_back({x[i], y[i]});
        }
        for (ii u : ans) cout << u.fi << ' ' << u.se << '\n';
    }
    return 0;
}
