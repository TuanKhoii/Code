#include<iostream>
using namespace std;
int main()
{
    int y,n,x;
    x=0;
    cin>>y;
    int a[y];
    while(cin>>n) {
        a[x]=n;
        x++;
    }
    for(int i=0;i<y;i++) {
        if(a[i]<0) {
            cout<<a[i]<<" ";
        }
    }
        cout<<endl;
    for(int i=0;i<y;i++) {
        if(a[i]>0) {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}