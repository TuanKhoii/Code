#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long square = n * n;
    long long temp = square;
    int total = 0;
    int count = 0;
    while(square) {
        count++;
        total += square % 10;
        square /= 10;
    } 
    if(total % 2 != 0) cout << -1;
    else {
        temp /= pow(10 , count - 1);
        total += temp;
        cout << total;
    }
    return 0;
}
