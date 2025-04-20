#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	long long int a, b, d, S;
	cin >> a >> b;
    S=a+b;
	while (b > 0) {
		d = a % b;
		a = b;
		b = d;
		S = a;
	}
	cout << S;
	return 0;
}
