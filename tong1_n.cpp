#include<iostream>
using namespace std;
int main()
{
    int n,tong,i;
    cin>>n;
    i=0;
    tong=0;
    while(i<n+1) {
        tong=tong+i;
        i++;
    }
    cout<<tong;
    return 0;
}