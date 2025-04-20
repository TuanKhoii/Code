#include <iostream>
#include <string>
using namespace std;

int longestPalindromeSubstring(string s) {
    int maxLength = 0;
    int n = s.length();

    // Tìm palindrome với trục là một ký tự
    for (int i = 0; i < n; i++) {
        int left = i;
        int right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            int currentLength = right - left + 1;
            maxLength = max(maxLength, currentLength);
            left--;
            right++;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int left = i;
        int right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            int currentLength = right - left + 1;
            maxLength = max(maxLength, currentLength);
            left--;
            right++;
        }
    }

    return maxLength;
}

int main() {
    string s;
    getline(cin, s);

    int result = longestPalindromeSubstring(s);
    cout << result << endl;

    return 0;
}
