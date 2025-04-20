#include <iostream>
#include <cmath>
using namespace std;
long long Factorial(int n) {
    if(n == 0) return 1;
    return n * Factorial(n - 1);
} 
int main() {
    double n, am = 1;
    double a , b ;
    cin >> n;
    double sinn = n , coss = 1;
    for(int i = 1; i <= 10; i++) {
        am *= -1;
        a = pow(n , 2*i + 1) / Factorial(2*i + 1);
        b = pow(n , 2*i) / Factorial(2*i);
        sinn += a*am;
        coss += b*am;
    }
    cout << roundf(sinn*100)/100 << endl;
    cout << roundf(coss*100)/100;
    return 0;
}