#include <iostream>
using namespace std;
int main()
{
    long long T, P, C;
    long long soto = 0;
    cin >> T >> P >> C;
    if(T == 1) {
        soto = P * C;
    }
    if(T == 2) {
        if(P % 2 != 0) {
            soto =  (P + 1) * C / 2;
        }
        else {
        soto = ( P * C / 2);
        }
    }
    cout << soto;
    return 0;
}