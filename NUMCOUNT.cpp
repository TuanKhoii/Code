#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while(getline(cin , s)) {
        stringstream ss(s);
        string temp;
        vector<string> a;
        while(ss >> temp) {
            a.push_back(temp);
        }
        cout << a.size() << endl;
    }
    return 0;
}