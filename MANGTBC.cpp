#include<iostream>
using namespace std;
void tbc(long long a[], long long b[], int n) {
    
    long long tong=0;
    for(int i=1;i<=n;i++)
    {
        tong+=a[i];
        b[i]=tong/i;
    }
}
void xuat(long long b[], int n) 
{
    for(int i=1;i<=n;i++)
        cout<<b[i]<<" ";
}
int main()
{
    long long a[1000000],b[10000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    tbc(a,b,n);
    xuat(b,n);
    return 0;
}
