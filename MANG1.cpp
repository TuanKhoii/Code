#include<iostream>
using namespace std;
int main()
{
    int x,n,y,tong;
    cin>>n;
    y=0;
    tong=0;
    int a[n];
    while(cin>>x) {
        a[y]=x;
        y++;
    }
    for(int i=0;i<n;i++) {
        tong+=a[i];
    }
    cout<<tong;
}