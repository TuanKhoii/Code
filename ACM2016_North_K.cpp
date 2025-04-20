#include<bits/stdc++.h>

using namespace std;

long long t, n, ans;
long double y = 0;
int x;
string s;
vector<pair<int, long double> > oper;
vector<long double> res;

long double Cal(long double x, int i, long double y) {
    if (!i) {
        return y;
    }
    switch (i) {
        case 1 : return ++x;
        case 2 : return x *= 2;
        case 3 : return x *= 3;
        case 4 : return x *= x;
    }
}
void Try(long double x, vector<pair<int, long double> > oper, int l, int r, int n) {
    if ((l == n) && (r == n)) {
        res.push_back(x);
        return;
    }
    if (l < n) {
        Try(Cal(x, oper[l].first, oper[l].second), oper, l + 1, r, n);
    }
    if (r < n) {
        Try(Cal(x, oper[r].first, oper[r].second), oper, l , r + 1, n);
    }
}
int stringToInt(string s) {
    if (s == "SET") {
        return 0;
    }
    if (s == "INC") {
        return 1;
    }
    if (s == "DOUBLE") {
        return 2;
    }
    if (s == "TRIPLE") {
        return 3;
    }
    return 4;
}

int main() {
    cin >> t;
    while (t--) {
        oper.clear();
        res.clear();
        cin >> n;
        while (n--) {
            cin >> s;
            x = stringToInt(s);
            if (!x) {
                cin >> y;
            }
            oper.push_back(make_pair(x, y));
        }
        int intSize = oper.size();
        Try((long double) 0, oper, 0, 0, intSize);
        long long Size;
        ans = 1;

        sort(res.begin(), res.end());
        Size = res.size();
        if (!Size) {
            ans = 0;
        }
        for (long long i = 1; i < Size; ++i)  {
            if (res[i] != res[i - 1]) {
                ++ans;
            }
        }
        cout << ans;
    }
    return 0;
}