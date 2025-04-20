//MINIGAME19.2:HOTEN
#include <iostream> 
using namespace std;
void HoTen(string s) {
    int pos;
    for(int i = s.size(); i >= 0; i--) {
        if(s[i] == ' ') {
            pos = i;
            break;
        }
    }
    int count = 0;
    cout << "Ho: ";
    for(int i = 0; i < pos; i++) {
        if(s[i] == ' ') break;
        cout << s[i];
        count++;
    }
    cout << endl;
    if(count < pos) {
        cout << "Lot: ";
        for(int i = count + 1; i < pos; i++) {
            cout << s[i];
        }
        cout << endl;
    }
    cout << "Ten: ";
    for(int i = pos + 1; i < s.size(); i++) {
        cout << s[i];
    }
}
int main() {
    string s;
    getline(cin , s);
    HoTen(s);
    return 0;
}