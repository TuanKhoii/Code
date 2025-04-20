#include <iostream>
using namespace std;
int main() {
    int arr[100][100] , n , m;
    int count = 1;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int h1 = 0 , h2 = n - 1;
    int c1 = 0 , c2 = m - 1;
    while(c1 <= c2 && h1 <= h2) {
        for(int i = c1; i <= c2; i++) {
            arr[h1][i] = count;
            count++;
        }
        h1++;
        for(int i = h1; i <= h2; i++) {
            arr[i][c2] = count;
            count++;
        }
        c2--;
        if(c1 <= c2) {
            for(int i = c2; i >= c1; i--) {
                arr[h2][i] = count;
                count++;
            }
            h2--;
        }
        if(h1 <= h2) {
            for(int i = h2; i >= h1; i--) {
                arr[i][c1] = count;
                count++;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}