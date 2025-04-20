#include <iostream>
using namespace std;
const string a = "Happy new year 2017";
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    while (n--) {
        string s;
        getline(cin, s);
        int count = 0;
        size_t pos = 0;
        while ((pos = s.find(a, pos)) != string::npos) {
            count++;
            pos += a.length(); 
        }
        cout << count << endl; 
    }
    return 0;
}
