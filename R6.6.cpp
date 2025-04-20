//R6.6:GIAITHUA2
#include <bits/stdc++.h>

using namespace std;

#define BASE 10000

int max(int a, int b) { return a > b ? a : b; }

class big {
 public:
  int a[23090];

  int n;

  void resize(int N) {
    for (int i = n; i < N; i++) a[i] = 0;
    n = N;
  }

  void fix() {
    for (int i = 0; i < n; i++) {
      a[i + 1] += (a[i] / BASE);
      a[i] = a[i] % BASE;
    }
  }

  void trim() {
    while (n > 0 && a[n - 1] == 0) n--;
  }

  void operator+=(big A) {
    resize(max(A.n, n) + 3);
    for (int i = 0; i < A.n; i++) a[i] += A.a[i];
    fix();
    trim();
  }

  void operator*=(int x) {
    resize(n + 3);
    for (int i = 0; i < n; i++) a[i] *= x;
    fix();
    trim();
  }

  string toString() {
    string ss;
    char s[23];
    for (int i = n - 1; i >= 0; i--) {
      sprintf(s, i == n - 1 ? "%d" : "%04d", a[i]);
      ss += s;
    }
    return ss;
  }

  big(int x) {
    n = 0;
    resize(4);
    a[0] = x;
    fix();
    trim();
  }
};

int main() {
  int n;
  cin >> n;

  big res = big(1);
  for (int i = 1; i <= n; i++) {
    res *= i;
  }

  cout << res.toString();
  return 0;
}
