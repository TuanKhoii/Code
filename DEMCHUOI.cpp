#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n; ++i) {
        string b;
        cin >> b;
        int count = 0;
        int pos = b.find(a);
        while(pos != string::npos) {
            count++;
            pos = b.find(a, pos + 1);
        }
        cout << count << endl;
    }
    return 0;
}