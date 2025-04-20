//MINIGAME6.2:XEPHANG
#include <iostream>
using namespace std;
int main() {
    int n , arr[100001];
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int total = 0;
    int count = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] == arr[i]) {
            count++;
            if(total < count) total = count;
        }
        else count = 0;
    }
    cout << n - total - 1;
    return 0;
}