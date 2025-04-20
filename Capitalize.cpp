#include <iostream>
using namespace std;
void Capitalize(string s) {
    for(int i = 0; i < s.size(); i++) {
        char c ;
        if(i == 0) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                c = s[i] - 32;
                cout << c;
            }
            else cout << s[i];
        }
        
        else {
        if(s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == ' ') {
            c = s[i] - 32;
            cout << c;
        }
        else if(s[i] >= 'a' && s[i] <= 'z' && s[i - 1] != ' ') cout << s[i];
        else if(s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ') {
            c = s[i] + 32;
            cout << c;
        }
        else cout << s[i];
        }
    }
}
int main() {
    string s;
    getline(cin , s);
    Capitalize(s);
}