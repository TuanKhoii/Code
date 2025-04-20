#include <iostream>
using namespace std;
int CatalanNumber(int n) {
	if (n == 0 || n == 1)
		return 1;
	else {
		int k = 0;
		for (int i = 0; i < n; i++) {
			k += CatalanNumber(n - 1 - i) * CatalanNumber(i);
		}
		return k;
	}
}

int main() {	
	int n;
	while (cin >> n) {
		cout << CatalanNumber(n) << endl;
	}
	return 0;
}