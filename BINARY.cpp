#include <iostream>
#include <string>
using namespace std;

void balanceLength(string &a, string &b) {
    int len_diff = abs((int)(a.length() - b.length()));
    string zeros(len_diff, '0');
    if (a.length() < b.length()) {
        a = zeros + a;
    } else {
        b = zeros + b;
    }
}

string binary_addition(string a, string b) {
    balanceLength(a, b);
    string result = "";
    int carry = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }
    if (carry) {
        result = '1' + result;
    }
    return result;
}

string multiply_by_17(string binary_number) {
    string shifted_binary = binary_number + "0000";
    return binary_addition(shifted_binary, binary_number);
}

int main() {
    string binary_input;
    cin >> binary_input;

    string result = multiply_by_17(binary_input);
    cout << result;

    return 0;
}
