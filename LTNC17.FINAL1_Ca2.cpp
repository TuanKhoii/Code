#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    stringstream ss(s);
    int tmp;
    vector<int> a;
    while(ss >> tmp) {
        a.push_back(tmp);
        if (ss.peek() == ',') ss.ignore();
    }
    int min = 10000000;
    int max = -9999999;
    for(int i = 0; i < a.size(); i++) {
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];
    }
    cout << min + max;
    return 0;
}