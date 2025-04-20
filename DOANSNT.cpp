//Div2.MINIGAME30.2:DOANSNT
#include<iostream>
using namespace std;
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2 ; i*i <= n ; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int a = n;
    int b = n;
    while(!isPrime(a)) {
        a--;
    }
    while(!isPrime(b)) {
        b++;
    } 
    cout << a << " " << b;
    return 0;
}