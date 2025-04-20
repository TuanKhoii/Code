#include <iostream>
using namespace std;
int main() {
    int n , arr[100];
    int tong = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        int j = arr[i];
        int m;
        while(j) {
            m = j % 10;
            j /= 10;
        }
        if(m % 2 == 0) {
            tong += arr[i];
        }
    }
    cout << tong;
    return 0;
}