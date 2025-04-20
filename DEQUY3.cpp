/*
liệt kê chỉnh hợp không lặp chập k của tập n phần tử S = {1, 2, 3, 4, ..... , n }
Dữ liệu nhập:
- Gồm hai số nguyên k và n cách nhau 1 khoảng trắng (1 ≤ k ≤ n ≤ 9)
Dữ liệu xuất:
mỗi dòng là một chỉnh hợp chập k
input:
2 3
output:
12
13
21
23
31
32
*/
#include <iostream>
using namespace std;
int n, k, arr[100], flag[100];
void Print() {
    for(int i = 1; i <= n; ++i) {
        cout << arr[i];
    }
    cout << endl;
}
void Sinh(int i) {
    for(int j = 1; j <= k; ++j) {
        if(!flag[j]) {
            flag[j] = 1;
            arr[i] = j;
            if(i == n) Print();
            else Sinh(i + 1);
            flag[j] = 0;
        }
    }
}
int main() {
    cin >> n >> k;
    Sinh(1);
    return 0;
}
