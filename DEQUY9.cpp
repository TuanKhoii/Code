#include <iostream>
using namespace std;
long Factorial(int n) {
    long tong = 0, tich = 1;
	for (int i = 1; i <= n; i++) {
		tich *= i;
		tong += tich;
	}
	return tong;
}
long Total(int n) {
	long s = 0 , t = 0;
	for(int i = 1; i <= n; i++) {
		t += i;
		s += t;
	}
	return s;
}
int main() {
    int n;
    cin >> n;
    cout << "S(" << n << ")" << " = " << Total(n) << endl;
    cout << "P(" << n << ")" << " = " << Factorial(n);
    return 0;
}