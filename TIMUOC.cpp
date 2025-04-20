#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> arr;
    for(long long i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            arr.push_back(i);
            if(i != n/i) arr.push_back(n/i);
        }
    }
    sort(arr.begin() , arr.end());
    int dem = 0;
    cout << arr.size() << endl;
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << ' ';
        ++dem;
        if(dem % 10 == 0) cout << endl;
    }
    return 0;
}