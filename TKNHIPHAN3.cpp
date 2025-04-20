#include <iostream>
using namespace std;
int main() {
    int n , x , dem = 0 , a[100];
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == x) { 
            cout << i ;
            dem++;
            return 0;
        }
    }
    if(dem == 0) cout << -1;
    return 0;
}