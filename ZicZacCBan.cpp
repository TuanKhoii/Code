#include <iostream>
using namespace std;

int main()
{
	int a[100][100], N, M, t = 1;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < M; j++) {
				a[i][j] = t;
				t++;
			}
		}
		else {
			for (int j = M - 1; j >= 0; j--) {
				a[i][j] = t;
				t++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cout << a[i][j] << " ";
		cout << endl;
	}
    return 0;
}