#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

struct BIT {
  vector<ll> tree;
  int n;

  BIT() {}
  BIT(int n) : n(n) { tree.resize(n + 5, 0); }
  BIT(vector<int> const &a) : BIT(a.size()) {
    for (size_t i = 0; i < a.size(); i++) add(i + 1, a[i]);
  }

  void add(int i, const int &val) {
    for (; i <= n; i += -i & i) tree[i] += val;
  }

  ll get_sum(int i) {
    ll sum = 0;
    for (; i > 0; i -= i & -i) sum += tree[i];
    return sum;
  }

  ll get_sum(int l, int r) { return get_sum(r) - get_sum(l - 1); }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int &x : a) cin >> x;

  BIT tree(a);

  for (int x, y; q--;) {
    char c;
    cin >> c >> x >> y;

    if (c == 'S') {
      cout << tree.get_sum(x + 1, y + 1) << endl;
    } else if (c == 'U') {
      tree.add(x + 1, y);
    } else if (c == 'V') {
      tree.add(x + 1, -y);
    }
  }

  return 0;
}
