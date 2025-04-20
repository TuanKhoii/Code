#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int a , b = 0;
    int c=-1;
    long long max =-500000;
    while (cin >> a){
        if(a <= x && a>max){
            max = a;
            c = b;
            if (a == x) break;
        }
        b++;
    }
    cout << c ;
    return 0;
}