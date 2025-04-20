//MINIGAME8.1:PHACHE
#include <iostream>
using namespace std;
int main() {
    int a , b , c;
    cin >> a >> b >> c;
    b /= 2;
    c /= 4;
    int i = min(a , min(b , c));
    cout << 7 * i;
    return 0;
}