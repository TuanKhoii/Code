#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int Max = -1000000;
    int temp = 0;
    for(int i = 0; i < s.size(); ++i) {
         while(isdigit(s[i]) && i < s.size()) {
             temp = temp * 10 + (s[i] - '0');
             ++i;
         }
         Max = max(Max, temp);
         temp = 0;
    }
    cout << Max;
    return 0;
}