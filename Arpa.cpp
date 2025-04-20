#include <iostream>
using namespace std;
int main() {
    int n , arr[5];
    arr[1] = 8;
    arr[2] = 4;
    arr[3] = 2;
    arr[0] = 6;
    cin >> n;
    if(n == 0) cout << 1;
    else {
        cout << arr[n % 4];
    }
    return 0;
}