#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int ut(char c) {
    if (c == '^') return 5;
    else if (c == '*' || c == '/') return 4;
    else if (c == '+' || c == '-') return 3;
    return 2;
}

int solve (int x, int y, char c) {
    int res;
    if (c == '/') res = x/y;
    else if (c == '*') res = x*y;
    else if (c == '+') res = x + y;
    else if (c == '-') res = x - y;
    else if (c == '^') res = pow (x, y);
    return res;
}

bool isOperator(char c) {
    return c == '-' || c == '+' || c == '*' || c == '/' || c == '^';
}

int main() {
    string tt; getline (cin, tt);
    int index = 0;
    while (index < tt.size ()) {
        if (tt[index] == ' ') tt.erase (index, 1);
        else index++;
    }
    stack<char> mystack;
    vector<string> v;
    for (int i = 0; i < tt.size(); i++) {
        char c = tt[i];
        if (c == '(') mystack.push(c);
        else if (isdigit(c)) {
            int x = 0, k;
            for (int j = i; j < tt.size(); j++) {
                if (!isdigit(tt[j])) break;
                x = x * 10 + (tt[j] - '0');
                k = j;
            }
            v.push_back(to_string(x));
            i = k;
        }
        else if (isOperator(c)) {
            while (!mystack.empty() && ut(c) <= ut(mystack.top())) {
                v.push_back(string(1, mystack.top()));
                mystack.pop();
            }
            mystack.push(c);
        } else if (c == ')') {
            while (!mystack.empty() && mystack.top() != '(') {
                v.push_back(string(1, mystack.top()));
                mystack.pop();
            }
            mystack.pop();
        }
    }
    while (!mystack.empty()) {
        v.push_back(string(1, mystack.top()));
        mystack.pop();
    }
    stack<int> s;
    for (string &i : v) {
        if (isdigit (i[0])) s.push (stoi(i));
        else if (isOperator (i[0])) {
            int k = s.top ();
            s.pop ();
            int x = s.top ();
            s.pop ();
            s.push (solve (x, k, i[0]));
        }
    }
    cout << s.top ();
    return 0;
}