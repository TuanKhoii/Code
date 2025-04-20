// Author: Adam Polak
// O(n lg n)

#include <algorithm>
#include <cassert>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

const int N = 100 * 1000;
const int TT = 128 * 1024;
const long long INFTY = 2e18;

typedef pair<int, int> Point;

Point diff(Point a, Point b) {
  return Point(a.first - b.first, a.second - b.second);
}

long long det(Point a, Point b) {
  return a.first * (long long)b.second - a.second * (long long)b.first;
}

int n, T, iter[2 * TT], result[N];
Point p[N];
vector<Point> tree[2 * TT];

bool cmp(int i, int j) {
  return det(diff(p[i + 1], p[i]), diff(p[j + 1], p[j])) < 0;
}

long long highest(Point segment, int a) {
  const vector<Point>& hull = tree[a];
  if (hull.empty()) return -INFTY;
  int& i = iter[a];
  while (i + 1 < hull.size() && det(segment, hull[i + 1]) > det(segment, hull[i]))
    ++i;
  return det(segment, hull[i]);
}

int main() {
  ios_base::sync_with_stdio(false);
  int Z;
  cin >> Z;
  while (Z--) {
    cin >> n;
    for (int i = 0; i < n; ++i)
      cin >> p[i].first >> p[i].second;
    T = 1;
    while (T < n) T *= 2;
    for (int i = 0; i < n; ++i)
      tree[T + i].push_back(p[i]);
    for (int i = T - 1; i > 0; --i) {
      vector<Point>& hull = tree[i];
      hull = tree[2 * i];
      for (Point a : tree[2 * i + 1]) {
        while (hull.size() > 1 && det(
              diff(hull[hull.size() - 2], a),
              diff(hull[hull.size() - 1], a)) >= 0)
          hull.resize(hull.size() - 1);
        hull.push_back(a);
      }
    }
    for (int i = 0; i < 2 * T; ++i) iter[i] = 0;
    vector<int> q(n - 1);
    for (int i = 0; i < n - 1; ++i)
      q[i] = i;
    sort(q.begin(), q.end(), cmp);
    for (int i : q) {
      result[i] = 0;
      Point segment = diff(p[i + 1], p[i]);
      long long threshold = det(segment, p[i + 1]);
      int a = T + i + 1;
      while (a > 0) {
        if (a % 2 == 0 && highest(segment, a + 1) > threshold) {
          ++a;
          while (a < T)
            if (highest(segment, 2 * a) > threshold)
              a = 2 * a;
            else
              a = 2 * a + 1;
          result[i] = a - T;
          assert(det(segment, p[result[i]]) > threshold);
          break;
        }
        a /= 2;
      }
    }
    for (int i = 0; i < n - 1; ++i) {
      if (i > 0) cout << " ";
      cout << result[i];
    }
    cout << endl;
    for (int i = 0; i < 2 * T; ++i) {
      vector<Point> temp;
      swap(temp, tree[i]);
    }
  }
}
