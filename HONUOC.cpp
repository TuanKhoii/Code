#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define SYNC() ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ull unsigned long long
#define ll long long
#define pii pair<int, int>
using namespace std;

int t;
int b[1000001];
int c[1000001];
int d[1000001];
int n;

struct wtf
{
    int idx, t;
    bool operator < (const wtf &x) const {
        return t > x.t;
    }
};

int main()
{
    SYNC();
    priority_queue<wtf> pq;

    cin >> n >> t;

    ll sum = 0;
    ll cur = 0;
    int soNgay;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i] >> c[i];
        sum += b[i];
        cur += c[i];
        if (c[i] > b[i]) soNgay = 0;
        else soNgay = b[i] / c[i];
        if (b[i] % c[i] != 0) soNgay++, d[i] = b[i] % c[i];
        else d[i] = c[i];
        pq.push({i,soNgay});
    }

    cout << sum << '\n';

    for(int i = 1; i <= t; i++)
    {
        while (!pq.empty() and pq.top().t <= i)
        {
            sum -= d[pq.top().idx];
            cur -= c[pq.top().idx];
            pq.pop();
        }
        
        sum -= cur;

        cout << sum << '\n';
    }

    return 0;
}
