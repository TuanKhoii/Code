#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n,x,t,am,tich,tong;
    am = -1;
    tich = 1;
    tong = 0;
    cin >> n >> x;
    for(int i = 0; i <= n; i++) {
        t = pow(x, 2*i+1);
        am *= -1;
        for(int z = 1; z <= 2*i+1 ;z++) {
            tich *= z;
        }
        tong += (am*t)/tich;
        tich = 1;
    }
    cout << roundf(tong*1000)/1000 ;
    return 0;
}