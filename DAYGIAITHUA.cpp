#include <iostream>
using namespace std;

long FAC(int n) {
    if(n == 1 || n == 0) return 1;
    return n * FAC(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << FAC(n);
    return 0;
}