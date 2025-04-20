//MINIGAME5:SAISO
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int m;
    cin >> m;
    if(m == 1) {
        double a;
        cin >> a;
        cout << fixed << setprecision(2) << a;
    }
    else if(m == 2) {
        double n , a;
        cin >> n >> a;
        cout << fixed << setprecision(2) << a * n;
    }
    else {
        double a , n , b , x;
        cin >> x >> a >> n >> b;
        cout << fixed << setprecision(2) << x * a + n * b;
    }
    return 0;
}