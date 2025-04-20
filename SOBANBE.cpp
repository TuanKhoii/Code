#include<iostream>
using namespace std;
int main()
{
    int a,b,tonga,tongb;
    tonga = 0;
    tongb = 0;
    cin >> a >> b;
    for(int i=1;i<a;i++) {
        if(a % i == 0) {
            tonga += i;
        }
    }
    for(int i=1;i<b;i++) {
        if(b % i == 0) {
            tongb += i;
        }
    }
    if(tonga == b && tongb == a) {
        cout << "YES";
    }
    else cout << "NO";
        
}