#include <iostream>
using namespace std;
int main() {
    int arr[100];
    arr[1] = 8;
    arr[2] = 4;
    arr[3] = 2;
    arr[0] = 6;
    long long n;
    cin >> n;
    if(n == 0) cout << 1;
    else cout << arr[n % 4];
    return 0;
}