#include <iostream>

int Euclid(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    int a[100];
    int i = 0;

    // Đọc dãy số từ đầu vào
    while (std::cin >> n) {
        a[i] = n;
        i++;
    }

    // Kiểm tra nếu số phần tử là lẻ, thêm một giá trị 0 để có cặp số phân số
    if (i % 2 == 1) {
        a[i] = 0;
        i++;
    }

    int tongtu = a[0];
    int tongmau = a[1];
    int c = tongmau;
    for (int k = 3; k < i; k += 2) {
        tongtu = tongtu * a[k] + c * a[k - 1];
        c = c * a[k];
    }

    // Tìm UCLN của tử và mẫu
    int ucln = Euclid(tongtu, c);

    // Rút gọn phân số
    tongtu = tongtu / ucln;
    c = c / ucln;

    // Xuất kết quả
    std::cout << tongtu << "/" << c;

    return 0;
}