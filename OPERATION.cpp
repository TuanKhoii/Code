//MINIGAME4:OPERATION
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X = 0;

    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation;

        if (operation == "++X" || operation == "X++") {
            ++X;
        } else if (operation == "--X" || operation == "X--") {
            --X;
        }
    }

    cout << X;

    return 0;
}