#include <iostream>
#include <fstream>
using namespace std;
bool DigitSum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    if(sum < 10) {
        return sum == 7;
    }
    else {
        sum %= 10;
        return sum == 7;
    }
} 
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}
int NhanSo(int n) {
    int tich = 1;
    while(n) {
        tich *= n % 10;
        n /= 10;
    }
    return tich;
}
int main() {
    ifstream is("input.txt");
    int n;
    ofstream os("output.txt");
    while(is >> n) {
        if(DigitSum(n)) os << NhanSo(n) << endl;
        else {
            int total = 0;
            while(n) {
                if(isPrime(n % 10)) {
                    total += n % 10;
                }
                n /= 10;
            }
            os << total << endl;
        }
    }
    return 0;
}