#include<iostream>
using namespace std;
int ucln(int a, int b) {
    int d;
    while(b) {
        d = a % b;
        a = b;
        b = d;
    }
    return a;
}
int main() {
    int a,b;
    cin >> a >> b;
    if(ucln(a,b) == 1) cout<<"yes";
    else cout<<"no";
    return 0;
}