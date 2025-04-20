#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a[100];
    string x;
    int b = 1;
    int dem = 0;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        a[b] = x;
        for(int j = 1; j < b; j++) {
            if(a[j] == x) {
                cout << b << ' ';
                dem++;
                break;
            }
        }
        b++;
    }
    if(dem == 0) cout << -1;
    return 0;
}