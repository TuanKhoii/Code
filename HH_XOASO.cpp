#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max = -n;
    int pos=0;
    int temp=n;
    while(n) {
        int t = pow(10,pos);
        int a = temp%t;
        int b = temp/t/10;
        if(b*t+a>max) {
            max=b*t+a;
        }
        n/=10;
        pos++;
    }
    cout<<max;
    return 0;
}