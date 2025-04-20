#include <iostream>
using namespace std;

long long a[41];

// Hàm để khởi tạo mảng a[]
void solve(long long a[]) {
    a[1] = 0;
    a[2] = 1000;
    a[3] = 2000;
    a[4] = 3000;
    a[5] = 4000;
    a[6] = 5000;
    a[7] = 6000;
    a[8] = 7000;
    a[9] = 8000;
    a[10] = 9000;
    a[11] = 10000;
    a[12] = 10000;
    a[13] = 10000;
    a[14] = 10000;
    a[15] = 15000;
    a[16] = 20000;
    a[17] = 20000;
    a[18] = 20000;
    a[19] = 25000;
    a[20] = 25000;
    a[21] = 50000;
    a[22] = 75000;
    a[23] = 100000;
    a[24] = 125000;
    a[25] = 150000;
    a[26] = 190000;
    a[27] = 200000;
    a[28] = 250000;
    a[29] = 300000;
    a[30] = 350000;
    a[31] = 500000;
    a[32] = 500000;
    a[33] = 750000;
    a[34] = 1000000;
    a[35] = 1250000;
    a[36] = 1500000;
    a[37] = 2000000;
    a[38] = 2500000;
    a[39] = 3000000;
    a[40] = 5000000;
}

// Hàm để xác định cấp độ hiện tại dựa trên số lượng điểm kinh nghiệm
int Xuat(long long a[], long long n) {
    int dem = 0;
    for(int i = 1; i <= 40; ++i) {
        if(n < 0) break; // Nếu số lượng điểm kinh nghiệm đã đạt tới hoặc vượt quá giới hạn thì dừng vòng lặp
        n -= a[i]; // Trừ điểm kinh nghiệm cần để đạt cấp độ tiếp theo
        dem = i; // Cập nhật cấp độ hiện tại
    }
    if(n >= 0) return 40;
    return dem - 1; // Trả về cấp độ hiện tại
}

int main() {
    solve(a); // Khởi tạo mảng a[]
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        long long b;
        cin >> b;
        cout << Xuat(a, b) << endl; // Xác định và in ra cấp độ hiện tại dựa trên số lượng điểm kinh nghiệm
    }
    return 0;
}
