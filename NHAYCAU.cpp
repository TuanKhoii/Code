#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h;
    cin >> h;
    int thoiGianChet = sqrt( h * 2 / 10 ) + 5 * 60;
    int n , s , v;
    cin >> n;
    int arr[100] , min = 10000000;
    for(int i = 0; i < n; i++) {
        cin >> s >> v;
        arr[i] = s/v;
        if(s/v < min) min = s/v;
    }
    if(min > thoiGianChet) {
        cout << "Khong cuu duoc";
    }
    else {
        for(int i = 0; i < n; i++) {
            if(min == arr[i]) cout << i << ' ';
            }
        cout << endl;
        cout << min;
    }
    return 0;
}