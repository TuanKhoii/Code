#include <bits/stdc++.h>
using namespace std;

int t, n, x[1001], y[1001], r[10001];
bool c[1001];

unsigned gcd(unsigned a, unsigned b) {
	while (b) b ^= a ^= b ^= a %= b;
	return a;
}

void rutgon(int a, int b) {
	int c = gcd(a,b);
	a = a/c;
	b = b/c;
}

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> r[i];
		memset(c,false,n);
		queue<int> q;
		q.push(0);
		pair<int, int> vel[1001];
		int state[1001];
		c[0] = true;
		vel[0] = make_pair(1,1);
		state[0] = 1;
		while (!q.empty()) {
			int k = q.front();
			q.pop();
			for (int i = 1; i < n; i++) {
				if (!c[i]) {
					long d = pow(x[i] - x[k], 2) + pow(y[i] - y[k], 2);
					if (d == pow(r[i] + r[k], 2)) {
						state[i] = state[k] == 1 ? 0 : 1;
						c[i] = true;
						q.push(i);
						long a = vel[k].first * r[k];
						long b = vel[k].second * r[i];
						long j = gcd(a,b);
						a = a/j;
						b = b/j;
						vel[i] = make_pair(a,b);
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if (c[i]) {
				if (vel[i].second == 1) cout << vel[i].first;
				else cout << vel[i].first << "/" << vel[i].second;
				cout << " ";
				if (state[i] == 1) cout << "clockwise\n";
				else cout << "counterclockwise\n";
			}
			else {
				cout << "not moving\n";
			}
		}				
	}
	return 0;
}
