//MINIGAME3:BOMNUOC
#include <iostream>
using namespace std;

int main() {
    int n, k, arr[100];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int x = 1;
    while (k > 0 && x <= n) {
        k -= arr[x];
        x++;
    }
    if (x > n) {
        cout << -1;
    } else {
        cout << x;
    }
    return 0;
}