#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i) {
        string str;
        cin >> str;
        int count = 0;
        for(int i = 0; i < n; ++i) {
            if(str == arr[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}