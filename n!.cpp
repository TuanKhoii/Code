#include<iostream>
using namespace std;
int main(){
    int i=1,n,tich=1;cin>>n;
    while(i<n+1){
       tich=tich*i;
       i++;
    }
    cout<<tich;
    return 0;
}