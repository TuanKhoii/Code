#include <iostream>
using namespace std;
int calculateLastNum(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
int main() {
    int N;
    cin >> N;
    int result = calculateLastNum(N);

    cout << result ;

    return 0;
}