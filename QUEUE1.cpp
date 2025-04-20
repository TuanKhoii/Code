#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    queue<char> q;

    for (char c : input) {
        if (c == '*') {
            if (!q.empty()) {
                cout << q.front();
                q.pop();
            }
        } else {
            q.push(c);
        }
    }

    cout << endl;

    return 0;
}
