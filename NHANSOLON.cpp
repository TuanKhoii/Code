#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Hàm nhân hai số lớn
string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    int result_len = len1 + len2;
    string result(result_len, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            result[i + j + 1] = temp % 10 + '0';
            carry = temp / 10;
        }
        result[i] += carry;
    }

    // Loại bỏ các số 0 không cần thiết ở đầu
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    }

    return "0";
}

int main() {
    // Nhập vào 2 số nguyên không âm
    string num1, num2;
    cin >> num1 >> num2;

    // Kiểm tra đầu vào hợp lệ

    // Thực hiện phép nhân và xuất kết quả
    string result = multiply(num1, num2);
    cout << result;

    return 0;
}