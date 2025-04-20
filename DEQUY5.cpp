#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main() 
{
    float t,y,tong,n,x;
    y = 1;
    cin >> n >> x;
    tong = x+1;
    for(int i=1;i<=n;i++) {
        t = pow(x,2*i+1);
        for(int z = 1 ; z <= (2*i+1) ; z++) {
            y *= z;
        }
        tong += t/y;
        y = 1;
    }
    float temp = tong;
    cout << roundf(temp*1000)/1000;
    return 0;
}