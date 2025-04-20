#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a[100];
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	//so chinh phuong
	int T;
	for (int i = 0; i < n; i++) {
		T = sqrt(a[i]);
		if (T * T == a[i])
			cout << a[i] << " " ;
	}
	cout << endl;

	// so NT
	for (int i = 0; i < n; i++) {

		bool flag = true;
		if (a[i] < 2)
			flag = false;

		for (int j = 2; j <= sqrt(a[i]); j++) {
			if (a[i] % j == 0) {
				flag = false;
				break;
			}
		}

		if (flag == true)
			cout << a[i] << " " ;

	}


	return 0;
}