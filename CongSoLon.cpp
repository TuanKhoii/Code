#include <iostream>
#include <string>

using namespace std;

string add(string num1, string num2) {
    while (num1.size() < num2.size()) {
        num1 = "0" + num1;
    }
    while (num2.size() < num1.size()) {
        num2 = "0" + num2;
    }
    int len = num1.size();
    string result(len, '0');
    int carry = 0;

    // Thực hiện cộng từ hàng đơn vị đến hàng cao nhất
    for (int i = len - 1; i >= 0; i--) {
        int digit_sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result[i] = (digit_sum % 10) + '0';
        carry = digit_sum / 10;
    }

    // Nếu có carry còn lại, thêm nó vào đầu kết quả
    if (carry > 0) {
        result = char(carry + '0') + result;
    }

    return result;
}

int main() {
    // Nhập vào 2 số nguyên
    string num1, num2;
    cin >> num1 >> num2;
    string sum = add(num1, num2);
    cout << sum;

    return 0;
}