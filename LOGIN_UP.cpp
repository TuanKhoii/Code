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
    string s;
    cin >> s;
    if (canConvertToUpcoder(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}


