#include <iostream>
using namespace std;
int main() {
    string arr[100];
    string s;
    int i = 0;
    while(cin >> s) {
        arr[i] = s;
        ++i;
    }
    for(int a = 0; a < i; a++) {
        if(a == i - 1) cout << arr[a] << '.';
        else cout << arr[a] << ',' << endl;
    }
    return 0;
}