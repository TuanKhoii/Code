#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,y,tong;
    x=0;
    tong=0;
    cin>>n;
    int a[n];
    while(cin>>y) {
        a[x]=y;
        x++;
    }
    for(int i=0;i<n;i++) {
        int c= sqrt(a[i]);
        if(c*c==a[i]) {
            tong+=a[i];
        }
    }
    cout<<tong;
    return 0;
}