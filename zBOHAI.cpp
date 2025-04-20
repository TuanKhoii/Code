#include <iostream>
using namespace std;
int main (){
    
    int n , m , a;
    cin >> n >> m;
    int tich = 1, sum = 0;
    while (n>0){
        a=n%10;
        n=n/10;
        tich = tich*a;
    }
    for (int i = 1; i <= m;++i){
        if (m%i==0){
            sum=sum+i;
        }
    }
    
    if (tich==sum) cout << "YES";
    else cout << "NO";
    
    return 0;
}