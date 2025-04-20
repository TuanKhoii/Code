#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    vector<int> result;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != k) {
            result.push_back(arr[i]);
        }
    }
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
        }
    return 0;
}