//MINIGAME2:CHAYBO
#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin >> a >> b >> c;
    int t;
    cin >> t;
    int s=0;
    s = t;
    if (s> a+b+c) s=s%(a+b+c);
    // 2 3 4, s = 12
    if (a+b+c == s || s == 0) cout << "A";
    else if (a == s) cout << "B";
    else if (a + b == s ) cout << "C";
    else if (s > 0 && s < a) cout << "AB";
    else if (s> a && s < a+b) cout << "BC";
    else if (s> a+b && s < a+b+c) cout << "CA";
    return 0;
}