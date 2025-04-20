#include <iostream>
using namespace std;
bool isPrime(int number) {
    if (number < 2) {
        return 0;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int A, B;
    cin >> A >> B;

    for (int i = A; i <= B; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }

    return 0;
}