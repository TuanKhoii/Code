//MINIGAME17:MiniOLP
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    int total = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'D' || s[i] == 'd') {
            count++;
            total += count;
        }
        if(s[i] == 'S' || s[i] == 's') {
            count = 0;
        }
    } 
    cout << total;
    return 0;
}