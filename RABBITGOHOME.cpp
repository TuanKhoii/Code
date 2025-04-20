//Div2.MINIGAME32.2:RABBITGOHOME
#include<iostream>
using namespace std;

int countWays(int A, int B) {
    int dp[20][20] = {0}; // Khởi tạo bảng lưu trữ số lượng con đường đến từng ô

    // Khởi tạo giá trị cho các ô cơ bản
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            if (i < j) // Nếu x < y, là ô bị trừng phạt, không có con đường nào
                dp[i][j] = 0;
            else if (i == 0 || j == 0) // Ô (0,0) hoặc trên trục x hoặc trục y sẽ có 1 con đường duy nhất
                dp[i][j] = 1;
            else // Tính toán số con đường đến từng ô dựa trên các ô trước đó
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[A][B]; // Trả về số lượng con đường đến ô (A, B)
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << countWays(A, B);
    return 0;
}
