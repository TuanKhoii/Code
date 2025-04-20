#include <iostream>
using namespace std;

bool canConvertToUpcoder(string s) {
    string target = "upcoder";
    int targetIndex = 0; 

    for (char c : s) {
        if (c == target[targetIndex]) {
            targetIndex++; 
        }
        if (targetIndex == target.size()) {
            return true; 
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    int dem = 0;
    int a[100];
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if(canConvertToUpcoder(s)) {
            a[dem] = i;
            dem++;
        }
    }
    cout << dem << endl;
    for(int i = 0; i < dem; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}