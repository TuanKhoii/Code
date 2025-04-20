//MINIGAME25.2:MAXSUMDIGIT
#include <iostream>
using namespace std;
int sumOfDigits(long long int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
long long int findMaxNumber(long long int x) {
    long long int power = 1, result = x;

    while (x) {       
        long long int newNum = (x - 1) * power + (power - 1);
        
        if (sumOfDigits(newNum) > sumOfDigits(result) ||
           (sumOfDigits(newNum) == sumOfDigits(result) &&
            newNum > result))
            result = newNum;

        x /= 10;
        power *= 10;
    }

    return result;
}

int main() {
    long long int n;
    cin >> n;
    cout << findMaxNumber(n);
    return 0;
}
