#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sochuso = s.size();
    if(s == "1") cout << 1;
    else if(s == "2") cout << 2;
    else if(s == "6") cout << 3;
    else if(s == "24") cout << 4;
    else if(s == "120") cout << 5;
    else if(s == "720") cout << 6;
    else {
        int n = 1;
        double x = 1;
        while (int(x) < sochuso) {
            x += log10(n);
            ++n;
        }
        cout << n - 1;
    }
    return 0;
}