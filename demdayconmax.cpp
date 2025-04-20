#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define int long long

using namespace std;

bool found (vector<int> &v, int x) {
    return find(v.begin (), v.end (), x) != v.end ();
}

int tong (vector<int> &k) {
    int sum = 0;
    for (auto it = k.begin (); it != k.end (); it++) sum += *it;
    return sum;
}

signed main () {
    ios_base::sync_with_stdio (false);
    cin.tie (NULL); cout.tie (NULL);
    vector<int> v;
    vector<vector<int>> t;
    int n, x; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (!found (v, x)) v.push_back (x);
        else {
            t.push_back (v);
            v.clear ();
            v.push_back (x);
        }
    }
    if (!v.empty ()) t.push_back (v);
    int MaxSize = 0;
    vector<int> sum (t.size ());
    for (int i = 0; i < t.size (); i++) {
        sum[i] = tong (t[i]);
        int tmp = t[i].size ();
        MaxSize = max(tmp, MaxSize);
    }
    vector<int> res = t[0];
    int maxSum = *max_element (sum.begin (), sum.end ());
    for (int i = 1; i < t.size(); i++) {
        if (sum[i] == maxSum && t[i].size () == MaxSize) {
            res = t[i];
            break;
        }
    }
    cout << res.size () << endl;
    for (auto it = res.begin (); it != res.end (); it++) cout << *it << ' ';
    return 0;
}
