#include <iostream>
using namespace std;
void XuatTu(string s) {
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) {
            cout << s[i];
            count ++;
        }
        if(isalpha(s[i + 1]) && s[i] == ' ' && count > 0) cout << endl;
        
    }
}
int main() {
    string s;
    getline(cin , s);
    XuatTu(s);
    return 0;
}