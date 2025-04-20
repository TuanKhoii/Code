#include <iostream>

using namespace std;

int main () {
    cin.tie(0) -> ios_base::sync_with_stdio(false);
    string num = "";
    for (int i = 1; i <= 100000; i++) num += to_string(i);
    int n; cin >> n;
    cout << num.find(to_string(n)) + 1;
}