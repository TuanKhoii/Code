#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string arr[1000];
    int Max = -100000;
    int pos;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        arr[i] = s;
        stringstream ss(s);
        string part1, part2, part3;
        getline(ss, part1, '-');
        getline(ss, part2, '-');
        getline(ss, part3);
        if(Max < stoi(part3)) {
            Max = max(Max, stoi(part3));
            pos = i;
        }
        if(stoi(part3) >= 0) count++;
    }
    cout << count << endl;
    cout << arr[pos];
    return 0;
}

