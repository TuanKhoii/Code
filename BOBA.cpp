#include<iostream>
using namespace std;
int main()
{
    int n,m,k,tong,i;
    tong = 0;
    cin >> n >> m >> k;
    while(n) {
        tong += n % 10;
        n /= 10;
    }
    while(m) {
        i = m % 10;
        m /= 10;
    }
    if(tong+i == k) cout<<"Yes";
    else cout<<"No";
    return 0;
}