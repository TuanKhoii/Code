#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int dem = 0;
    int danhdau[100] = {0};
    string s, t = "", c = "";
    getline(cin, s);

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 0; j < s.size() - i + 1; j++) {
            t = s.substr(j, i);
            if (danhdau[j] != 1 && isPalindrome(t)) {
                danhdau[j] = 1; 
                for (int k = j + 1; k < s.size() - i + 1; k++) {
                    c = s.substr(k, i);
                    if (c == t) danhdau[k] = 1;
                    c = "";
                }
                dem++;
            }
            t = "";
        }
        for (int j = 0; j < s.size(); j++) danhdau[j] = 0;
    }

    cout << dem;
    return 0;
}