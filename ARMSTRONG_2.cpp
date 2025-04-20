#include<bits/stdc++.h>
using namespace std;
int dp[12][12];
int get(int x){
    int ans = 0;
    int t = x;
    int cnt = 0;
    while(t){
        ++cnt,t /= 10;
    }
    while(x){
        ans += dp[x % 10][cnt];
        x /= 10;
    }
    return ans;
}
int main(){
    for(int i = 0;i < 10;i++){
        dp[i][0] = 1;
        for(int j = 1;j <= 8;j++){
            dp[i][j] = dp[i][j - 1] * i;
        }
    }
    int a,b;
    cin >> a >> b;
    vector<int> ans;
    for(int i = a;i <= b;i++){
        if (i == get(i)){
            ans.push_back(i);
        }
    }
    if (ans.empty()){
        cout << "-1";
        return 0;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << ' ';
    }
}
