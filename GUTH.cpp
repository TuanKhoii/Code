#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = n - 1; i >= 0; i--) {
        cout << s[i];
    }
    for(int i = s.size() - 1; i >= n; i--) {
        cout << s[i];
    }
    return 0;
}