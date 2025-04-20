//R6.5:Stick
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double h , l;
    cin >> h >> l;
    long long result = (2 * h)/(3.14 * l) * 100;
    cout << roundf(result)/100 ;
    return 0;
}