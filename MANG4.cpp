#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a[100];
	int sl;
	cin >> sl;
	for (int i = 0; i < sl; i++) {
		cin >> a[i];
	}
	int S = 0;
	for (int i = 0; i < sl; i++) {
		bool flag = true;
		if (a[i] < 2)
			flag = false;

		for (int j = 2; j <= sqrt(a[i]); j++) {
			if (a[i] % j == 0) {
				flag = false;
				break;
			}
		}

		if (flag) {
		
			S += a[i];
		}
	}
	cout << S;
	return 0;
}