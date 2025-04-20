#include <iostream>
using namespace std;
int main() {
    int a[100] , n;
    cin >> n;
    a[0] = 0;
    if(n == 0) {
        cout << 15;
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int dem = 0;
    int vitri = 0;
    for(int i = 0; i < n; i++) {
        vitri++;
        if(a[i + 1] - a[i] > 15) {
            dem++;
            if(a[i] + 15 >= 90) cout << 90;
            else cout << a[i] + 15;
            return 0;
        }
    }
    if(dem == 0) {
        if(a[vitri] + 15 > 90) cout << 90;
        else cout << a[vitri] + 15;
    }
    return 0;
}