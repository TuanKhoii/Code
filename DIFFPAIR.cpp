//MINIGAME25.1:DIFFPAIR
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0; // Trả về -1 nếu không tìm thấy
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[1000001];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n); // Sắp xếp mảng

    int count = 0;
    for(int i = 0; i < n; i++) {
        // Tìm vị trí của số cần so sánh trong mảng đã sắp xếp
        int pos = binarySearch(arr, i + 1, n - 1, arr[i] + k);
        if (pos != 0) // Nếu tìm thấy
            count++;
    }

    cout << count;
    return 0;
}
