/*
Cho n chữ số 1, 2, 3, .., n (1 ≤ n ≤ 8), hãy liệt kê tất cả các hoán vị của n chữ số trên theo thứ tự từ điển.
Dữ liệu nhập:
- Là số nguyên n (1 ≤ n ≤ 8)
Dữ liệu xuất:
- Dòng thứ nhất là số nguyên m thể hiện số lượng hoán vị có được.
- Trong m dòng tiếp theo, mỗi dòng liệt kê một hoán vị theo thứ tự từ điển. Trong một hoán vị các chữ số đứng sát nhau (không dùng khoảng trắng để ngăn cách các chữ số)

Ví dụ
input
2
output
2
12
21
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s = "";
  for (int i = 1; i <= n; ++i) s += to_string(i);

  int f = 1;
  for (int i = 2; i <= n; ++i) f *= i;

  cout << f << endl;
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  return 0;
}
