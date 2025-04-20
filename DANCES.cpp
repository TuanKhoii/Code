#include <iostream>
using namespace std;

int main() {
    long long a[100001], n, k;
    cin >> n >> k;

    // Find the maximum value in array a
    int maxVal = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }

    // Dynamically allocate memory for array b based on the maximum value
    int *b = new int[maxVal + k + 1];

    for (int i = 0; i < n; i++) {
        b[a[i]] = 1;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] + k <= maxVal && b[a[i] + k]) {
            count++;
        }
    }

    delete[] b;
    cout << count;

    return 0;
}
