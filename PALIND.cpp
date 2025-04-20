#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int rev = 0 , temp = n;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(temp == rev) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x , y;
        cin >> x >> y;
        if(isPalindrome(x + y)) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}