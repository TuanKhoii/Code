#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dem = 0;
    
    if (n < 2) {
        cout << -1;
    }
    if (n >=2 ) {
        cout << 2 << " ";
    }
    for (int i = 3; i <=n; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                dem = dem + 1;
            }
        }
        if (dem == 0) {
            cout << i << " ";
        }
        dem = 0;
    }
    return 0;
}