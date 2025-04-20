#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    if(s.size() > 10 || s.size() < 10) {
        cout << "Khong hop le";
        return 0;
    }
    for(int i = 0; i < s.size(); i++) {
        if(!isdigit(s[i])) {
            cout << "Khong hop le";
            return 0;
        }
    }
    if(s.find("04") == 0) {
        cout << "Ha Noi - ";
        for(int i = 2; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else if(s.find("08") == 0) {
        cout << "TPHCM - ";
        for(int i = 2; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else if(s.find("059") == 0) {
        cout << "Gia Lai - ";
        for(int i = 3; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else if(s.find("061") == 0) {
        cout << "Dong Nai - ";
        for(int i = 3; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else if(s.find("0511") == 0) {
        cout << "Da Nang - ";
        for(int i = 4; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else if(s.find("0710") == 0) {
        cout << "Can Tho - ";
        for(int i = 4; i < s.size(); i++) {
            cout << s[i];
        }
    }
    else cout << "Khong hop le";
    return 0;
}