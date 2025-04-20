#include<iostream>
using namespace std;
int main()
{
    long n,res;
    cin >> n;
    res = n;
    for(int i = 1; i <= n; i++) {
        res -= i;
        if(res <= 0 ) break;
    }
    if(res == 0) cout<<"YES";
    else cout<<"NO";
}