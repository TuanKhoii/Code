#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) if(!(n % i)) return false;
    return true;
}
bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    int left, right;
    cin >> left >> right;
    int count = 0;
    for(int i = left; i <= right; ++i) {
        if(isPrime(i) && isPalindrome(to_string(i))) count++;
    }
    cout << count;
    return 0;
}