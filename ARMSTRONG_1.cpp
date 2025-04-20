#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int number) {
    int numDigits = countDigits(number);
    int temp = number;
    int sum = 0;
    
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }
    
    return (sum == number);
}

int main() {
    int N;
    while (cin >> N) {
        if (isArmstrong(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}