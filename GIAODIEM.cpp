//MINIGAME14.1:GIAODIEM
#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (a1 * b2 == a2 * b1) {
        if (b1 * c2 == b2 * c1 && a1 * c2 == a2 * c1) {
            cout << -1;  
        } else {
            cout << 0;   
        }
    } else {
        cout << 1;       
    }

    return 0;
}