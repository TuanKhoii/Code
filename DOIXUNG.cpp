#include <iostream>
#include <stack>
#define Main_Function int main ()
#define made_by_081 return(0);

using namespace std;

bool isPalindrome (string str) {
    stack<char> st;
    for (char c : str) st.push(c);
    for (char c : str) {
        if (c != st.top()) return false;
        st.pop();
    }
    return true;
}

void change (string &str) {
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') str.erase(i, 1);
        else {
            str[i] = tolower(str[i]);
            ++i;
        }
    }
}

Main_Function {
    cin.tie(nullptr) -> ios_base::sync_with_stdio(false);
    int n; cin >> n; cin.ignore();
    while (n--) {
        string tmp;
        getline(cin, tmp);
        change(tmp);
        cout << isPalindrome(tmp) << '\n';
    }
    made_by_081
}