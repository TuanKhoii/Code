#include <iostream>
using namespace std;
void SequentialSearch(int arr[] , int& n , int x ) {
    int max = x;
    int max2 = -999999;
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= max && arr[i] >= max2) {
            max2 = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == max2) {
            cout << i << " ";
            dem++;
        }
    }
    if(dem == 0) cout << -1;
}
int main() {
    int arr[100] , n = 0 , y , x;
    cin >> x;
    while(cin >> y) {
        arr[n] = y;
        n++;
    }
    SequentialSearch(arr , n , x);
    return 0;
}