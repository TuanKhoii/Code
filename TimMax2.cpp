#include <iostream>
using namespace std;
int main() {
    int a[100][100];
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int max = -999;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(max <= a[i][j]) max = a[i][j];
        }
    }
    cout << max;
    return 0;
}