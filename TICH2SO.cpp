//MINIGAME6.1:TICH2SO
#include <iostream>
using namespace std;
int main() {
    int arr[100] , n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int dem = 0;
    for(int i = 2; i < n; i++) {
        if(arr[i - 1] * arr[i + 1] == arr[i]) {
            dem++;
        }
    }
    if(dem == 0) {
        cout << -1;
        return 0;
    }
    else cout << dem << endl;
    for(int i = 2; i < n; i++) {
        if(arr[i - 1] * arr[i + 1] == arr[i]) {
            cout << i << " ";
        }
    }
    return 0;
}