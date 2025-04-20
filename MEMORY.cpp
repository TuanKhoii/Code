#include <iostream>
using namespace std;

int main() {

    int n , k , a , b ;
    cin >> n >> k ;
    
    int x[n+1] ;
    for (a = 1 ; a <= n ; a++) {
        cin >> x[a] ;
    }
    
    int so , dem , ahihi ;
    so = 0 ; ahihi = 0;
    
    for (a = 1 ; a <= n ; a++) {
        
        for (b = 1 ; b <= a ; b++) {
            
            dem = x[b] ;
            so++ ;
            if (so == k) {
                 cout << dem << endl ;
                 ahihi = 1 ;
                 break ;
            }
        }
        if (ahihi == 1 ) break;
        
    }
    return 0;
}
