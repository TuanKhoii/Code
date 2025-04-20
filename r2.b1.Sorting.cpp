#include <iostream>
using namespace std;

const int Max = 100000;
int a[Max], b[Max], countOne, countTwo, c13, c31, n, Count, res;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
			countOne++;
		else if (a[i] == 2)
			countTwo++;
	}
	for (int i = 0; i < countOne; i++)
		b[i] = 1;
	for (int i = countOne; i < countOne + countTwo; i++)
		b[i] = 2;
	for (int i = countOne + countTwo; i < n; i++)
		b[i] = 3;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			Count++;
		if (a[i] - b[i] == 2)
			c31++;
		else if (a[i] - b[i] == -2)
			c13++;
	}
	res = (Count + ((c13 > c31) ? (c13 - c31) : (c31 - c13))) / 2;
	cout << res << endl;
	return 0;
}
