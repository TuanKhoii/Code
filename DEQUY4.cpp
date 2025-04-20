#include<iostream>
using namespace std;
int main()
{
    int x,n,temp,total;
    cin >> n >> x;
    temp = x;
    total = 1;
    for(int i = 1; i <= n; i++) {
        total += temp;
        temp *= x;
    }
    cout<<total;
    return 0;
}