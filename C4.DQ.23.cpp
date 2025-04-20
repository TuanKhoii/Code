#include <iostream>

using namespace std;

long long convert (int n) {
    if (n == 0) return 0;
    return (n % 2) + convert(n/2) * 10; 
}

int main () {
    int n; cin >> n;
    cout << convert(n);
    return 0;
}
