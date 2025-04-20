#include<iostream>
using namespace std;
int main()
{
    int n,x,s,tong;
    x=0;
    tong=0;
    cin>>n;
    int a[n];
    while(cin>>s) {
        a[x]=s;
        x++;
    }
    for(int i=0;i<n;i++) {
        if((a[i])%2==0){
            tong+=a[i];
        }
    }
    cout<<tong;
    return 0;
}