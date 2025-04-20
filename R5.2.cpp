//R5.2:DAONGUOCSO
#include <iostream>
using namespace std;

void DaoNguoc(string s) {
    int n = s.size();

    if (s[0] == '-') {
        cout << '-';
    }

    // Skip leading zeros
    int leadingZeros = (s[0] == '-') ? 1 : 0;
    while (leadingZeros < n && s[leadingZeros] == '0') {
        leadingZeros++;
    }

    int dem = 0;
    for (int i = n - 1; i >= leadingZeros; i--) {
        while (i < n && s[i] == '0' && dem == 0) {
            i--;
        }
        cout << s[i];
        dem = 1;
    }
}

int main() {
    string s;
    cin >> s;

    DaoNguoc(s);

    return 0;
}