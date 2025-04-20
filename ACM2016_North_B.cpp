#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int countDistinctPalindromes(const string &s) {
    int n = s.size();
    unordered_set<string> palindromes;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int d = 0; i - d >= 0 && i + d < n; d++) {
            if (s[i - d] == s[i + d]) {
                string palindrome = s.substr(i - d, 2 * d + 1);
                if (palindromes.find(palindrome) == palindromes.end()) {
                    count++;
                    palindromes.insert(palindrome);
                }
            } else {
                break;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int d = 0; i - d >= 0 && i + d + 1 < n; d++) {
            if (s[i - d] == s[i + d + 1]) {
                string palindrome = s.substr(i - d, 2 * d + 2);
                if (palindromes.find(palindrome) == palindromes.end()) {
                    count++;
                    palindromes.insert(palindrome);
                }
            } else {
                break;
            }
        }
    }

    return count;
}

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore(); 
    while (testCases--) {
        string s;
        getline(cin, s);
        cout << countDistinctPalindromes(s) << endl;
    }
    return 0;
}
