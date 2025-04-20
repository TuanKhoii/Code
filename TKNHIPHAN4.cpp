#include <iostream>

using namespace std;

int main() {
    int n, L, R;
    cin >> n >> L >> R;

    int arr[1000001]; // Mảng có thể chứa tối đa 10^6 phần tử
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Tìm giá trị Min trong đoạn [L;R]
    int minVal = arr[L - 1];
    for (int i = L; i <= R; ++i) {
        if (arr[i - 1] < minVal) {
            minVal = arr[i - 1];
        }
    }

    // Tìm giá trị Max trong đoạn [L;R]
    int maxVal = arr[L - 1];
    for (int i = L; i <= R; ++i) {
        if (arr[i - 1] > maxVal) {
            maxVal = arr[i - 1];
        }
    }

    cout << minVal << " " << maxVal << endl;

    return 0;
}