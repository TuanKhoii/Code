//MINIGAME14.2:TEODIHOC
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long d , k , a , b , t;
    long long t_min , nk , nd , T , T1 , T2 , T3 = 0 , T4 = 0 , tg , z = 0;
    cin >> d >> k >> a >> b >> t;
    if(d <= k) cout << d * a;
    else { 
        t_min = a * k;
        nk = d/k;
        nd = d % k;
        T1 = t + a*k;
        T2 = b*k;
        if(T1 <= T2) T = (nk - 1)* T1;
        else T = (nk - 1)* T2;
        if(nd != 0) {
            T3 = t + a*nd;
            T4 = b*nd;
            z = min(T3 , T4);
        }
        t = t_min + T + z;
        cout << t;
    }
    return 0;
}