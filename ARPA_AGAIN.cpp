#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[4] = {6, 8, 4, 2}; // Change the array size to 4

    string s;
    cin >> s;

    int a = 0;
    if (s.size() >= 3) {
        for (int i = s.size() - 3; i < s.size(); ++i) {
            a = a * 10 + (s[i] - '0');
        }
    } else if (!s.empty()) {
        // This handles strings shorter than 3 digits but not empty
        a = stoi(s);
    }

    if (a == 0) {
        int leadingZeros = 0;
        int vitri = s.size() - 1;
        for (int i = s.size() - 1; i >= 0 && s[i] == '0'; --i) {
            leadingZeros++;
            vitri--;
        }
        if (vitri >= 0) {
            a = s[vitri] - '0';
        }
        if (a == 0) {
            cout << 1;
            return 0;
        }
        a *= pow(10, leadingZeros);
    }

    cout << arr[a % 4];

    return 0;
}

