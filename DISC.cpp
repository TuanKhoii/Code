#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> order(m);
    for (int i = 0; i < m; ++i) {
        cin >> order[i];
    }

    vector<int> stack;
    for (int i = 1; i <= n; ++i) {
        stack.push_back(i);
    }

    for (int disc : order) {
        auto it = find(stack.begin(), stack.end(), static_cast<int>(disc));
        int idx = distance(stack.begin(), it);
        stack.erase(it);
        stack.insert(stack.begin(), disc);
    }

    for (int disc : stack) {
        cout << disc << " ";
    }

    return 0;
}
