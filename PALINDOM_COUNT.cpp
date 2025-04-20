#include <iostream>
using namespace std;
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
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int left, right;
        cin >> left >> right;
        if(left > right) {
            int temp = left;
            left = right;
            right = temp;
        }
        int count = 0;
        for(int i = left; i <= right; ++i) {
            if(isPalindrome(to_string(i))) count++;
        }
        cout << count << endl;
    }
    return 0;
}