#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int count = 0;
    int pos = b.find(a);
    while(pos != string::npos) {
        count++;
        pos = b.find(a, pos + 1);
    }
    cout << count;
    return 0;
}