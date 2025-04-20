#include <iostream>
#include <iomanip>

using namespace std;

double S (int n) {
    if (n == 0) return 1;
    return 1.0/(2*n + 1) + S(n - 1);
}

int main () {
    cout.precision(3);
    int n; cin >> n;
    if(n == 1) cout << "1,";
    else if(n == 2) cout << "1.53";
    else cout << fixed << S(n);
    return 0;
}
