//Div2.MINIGAME26.3:AGGCOW
#include<iostream>
#include<algorithm>
using namespace std;
int n, c;
int m[100010];
bool check(int x) {
	int l = m[0], count = 1;
	for (int i = 1; i < n; ++i) {
		if (m[i] - l >= x) {
			l = m[i];
			++count;
		}
	}
	return count >= c;
}
int main() {
	cin >> n >> c;
	for (int i = 0; i < n; ++i) cin >> m[i];
	sort(m, m + n);
	int l = 1, r = m[n - 1] - m[0];
	int mid = (l + r) / 2 , ans = 0;
	while (l <= r) {
		if(check(mid)) {
		    ans = mid;
			l = mid + 1;
        }
		else {
			r = mid - 1;
		}
		mid = (l + r) / 2;
	}
	cout << ans;
	return 0;
}