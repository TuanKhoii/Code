#include <iostream>
using namespace std;
long Fibonacci(int n) {
    if(n == 2 || n == 1) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << Fibonacci(i) <<" ";
    }
    return 0;
}