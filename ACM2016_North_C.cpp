#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	long N;
	int T;
	double R1, k;

	cin >> T;
	while (T--){
		cin >> N >> R1 >> k;
		double tmp = pow(k, N - 1);
		double Rn = R1*tmp;
		double A1AN = 2 * R1*(1 - tmp) / (1 - k) - R1 + Rn;
		double D = R1 - Rn;
		cout << fixed;
		cout << setprecision(3) << sqrt(A1AN*A1AN - D*D) << endl;
	}

	return 0;
}