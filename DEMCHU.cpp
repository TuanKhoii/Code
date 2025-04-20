#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    getline(cin , s);
    string tmp = "";
    for(int i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) {
             char c = s[i];
             if(c >= 65 && c <= 92) c += 32;
             tmp += c;
        }
    }
    int arr[125] = { 0 };
    for(int i = 0; i < tmp.size(); i++) {
        arr[(int) tmp[i]]++;
    }
    for(int i = 97; i <= 122; i++) {
        if(arr[i] != 0) {
            cout << (char) i << " : " << arr[i] << endl;
        }
    }
    return 0;
}