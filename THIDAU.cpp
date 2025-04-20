#include <bits/stdc++.h>

using namespace std;

int f(int i, int prev, int k, int n, vector<int> a, vector<int> b){
    if (i == n - 1) {
        if (a[i] - a[prev] >= k) return b[i];
    }
    int np = f(i + 1, prev, k, n, a, b);
    int p = 0;
    if (prev == -1 || a[i] - a[prev] >= k) p = b[i] + f(i + 1, i, k, n, a, b);
    return max(np, p);
}

int main(){
    int n, k; cin >> n >>k;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    vector<int> dp(n);
    int ans = 0;
    for (int i = 0 ; i < n ; i++){
        dp[i] = b[i];
        for (int prev = 0 ; prev < i ; prev++){
            if (a[i] - a[prev] >= k && dp[i] < dp[prev] + b[i]){
                dp[i] = dp[prev] + b[i];
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}