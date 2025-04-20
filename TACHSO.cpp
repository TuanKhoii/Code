//MINIGAME18.2:TACHSO
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  
    int sum = 0;  
    for (int i = 0; i < s.size(); ++i) {
        int sign = 1; 
        if (s[i] == '-') {
            sign = -1;
            ++i;
        }

        int num = 0;
        while (i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            ++i;
        }
        cout << sign * num << endl;
        sum += sign * num;
    }
    cout << sum << endl;

    return 0;
}