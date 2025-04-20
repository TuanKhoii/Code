#include <iostream>
using namespace std;
int main() {
    int a[100][100] , b[100][100] , c[100][100];
    int m , n , p;
    cin >> m >> n;
    for(int i = 0 ; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> n >> p;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    for(int i = 0 ; i < m; i++) {
        for(int j = 0; j < p; j++) {
            c[i][j] = 0;
            for(int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0 ; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
          cout << endl;
    }
     return 0; 
}
