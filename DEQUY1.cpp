/*
Cho k chữ số 1, 2, 3, ..., k (1 ≤ k ≤ 9), hãy liệt kê các chuỗi k-phân có chiều dài n theo thứ tự từ điển (xem ví dụ để hiểu rõ hơn chuỗi k-phân).
Dữ liệu nhập:
- Gồm hai số nguyên k và n cách nhau 1 khoảng trắng (1 ≤ k ≤ 9, 1 ≤ n ≤ 5)
Dữ liệu xuất:
- Dòng đầu tiên là một số nguyên m - số lượng chuỗi k-phân tính được.
- Trong m dòng tiếp theo, mỗi dòng là một chuỗi k-phân, các dòng sắp theo thứ tự từ điển.
Input: 3 2
Output: 
9
11
12
13
21
22
23
31
32
33
*/
#include <iostream>
#include <vector>

using namespace std;

void generate_kary_strings(int k, int n, string current_string, vector<string>& result) {
    if (n == 0) {
        result.push_back(current_string);
        return;
    }

    for (int i = 1; i <= k; ++i) {
        string new_string = current_string + to_string(i);
        generate_kary_strings(k, n - 1, new_string, result);
    }
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<string> result;
    generate_kary_strings(k, n, "", result);

    cout << result.size() << endl;
    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}
