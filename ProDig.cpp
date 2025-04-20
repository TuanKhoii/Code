#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << 10 << endl;
        return 0;
    }
    if (N < 10) {
        cout << N << endl;
        return 0;
    }

    int factors[10] = {0}; 
    int divisor = 9;

    while (N > 1 && divisor > 1) {
        if (N % divisor == 0) {
            factors[divisor]++;
            N /= divisor;
        } else {
            divisor--;
        }
    }

    // Nếu không tìm được số Q thỏa mãn
    if (N != 1) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 2; i <= 9; i++) {
        while (factors[i] > 0) {
            cout << i;
            factors[i]--;
        }
    }
    cout << endl;

    return 0;
}
