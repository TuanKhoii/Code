#include <iostream>
using namespace std;
int main() {
    int n , a[100] , x = 0 , total = 0;
    while(cin >> n) {
        a[x] = n;
        x++;
    }
    if(x < 3) {
        cout << "NO";
        return 0; 
    }
    else cout << x << endl;
    int temp;
    for(int i = 0; i < x; i++) {
        for(int j = i + 1; j < x; j++) {
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
        total += a[i];
    }
    cout << total << endl;
    for(int i = 0; i < x; i++) {
        cout << a[i] << " ";
    }
    return 0;
}