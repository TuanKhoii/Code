#include <iostream>

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, x;
    std::cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = binarySearch(arr, n, x);

    std::cout << result << std::endl;

    return 0;
}