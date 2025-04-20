#include <iostream>
#include <math.h>
using namespace std;
int main() { 
    int n; 
    cin >> n;
    int count = 0; 
    for (int a = 1; a <= n; a++) { 
        for (int b = a + 1; b <= n; b++) { 
            int c = sqrt(a * a + b * b); 
            if (c > n) { 
                break; 
            } 
            if (c * c == a * a + b * b)  { 
                cout << a << " " << b << " " << c << endl; 
                count++; 
            }
        } 
        
    }

    if (count == 0)  cout << -1 << endl; 

    return 0; 
} 