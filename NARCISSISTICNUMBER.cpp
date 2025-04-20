#include <iostream>
#include <cmath>
using namespace std;
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
bool isNarcissistic(int num) {
    int originalNum = num;
    int n = 0; 
    while (num) {
        num /= 10;
        n++;
    }
    num = originalNum;
    int sum = 0;
    while (num) {
        int digit = num % 10;
        sum += power(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int m;
    cin >> m;
    if (isNarcissistic(m)) {
        cout << 1;
        } 
    else {
        cout << 0;
        }
    return 0;
}