// MINIGAME22.1:CUPS
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        int temp = n;
        if (temp == a) {
            n = b;
        } else if (temp == b) {
            n = a;
        }
    }
    cout << n;

    return 0;
}
