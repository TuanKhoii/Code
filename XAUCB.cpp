#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin , s);
    int arr[125] = { 0 };
    for(int i = 0; i < s.size(); ++i) {
        arr[(int) s[i]]++;
    }
    int dem = 0;
    for(int i = 32; i <= 122; i++) {
        if(arr[i] != 0) dem++;
    }
    cout << dem;
    return 0;
}