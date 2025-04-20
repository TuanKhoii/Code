#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a[100];
    float m , n;
    cin >> n;
    m = round(n / 2);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int temp;
    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < m; j++){
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;  
            }
        }
    }
    int tg;
    for(int i = m; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;  
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }  
    return 0;
}