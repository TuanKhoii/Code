#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<2) {
        cout<<0;
    }
    else if(n==2) {
        cout<<n;
    }
    else {
        for(int i=2;i<n;i++) {
            if(n%i==0) {
                cout<<0;
                return 0;
            }
            else {
                cout<<n;
                return 0;
            }
        }
    }
    return 0;
}