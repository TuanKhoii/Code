#include<iostream>
using namespace std;
int main()
{
    int n,x,tong;
    x=0;
    int a[100];
    while(cin>>n) {
        if(n==0) {
            break;
        }
        else{
        a[x]=n;
        x++;
    }
    }
    for(int i=0;i<x;i++) {
        tong+=a[i];
    }
    tong=tong%100;
    if(tong==00) {
        cout<<"DEP";
    }
    else if(tong==55) {
        cout<<"TRUNGBINH";
    }
    else {
        cout<<"XAU";
    }
    return 0;
}
