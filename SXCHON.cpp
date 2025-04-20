#include <iostream>

using namespace std;

#define BaoisGay signed main()
#define BaoThichTu return(0);
int a[100], size;

int BaoGay (int l, int r) {
    int i = l - 1, j = r + 1, pivot = a[l];
    while (1) {
        do { --j; } while (a[j] > pivot);
        do { ++i; } while (a[i] < pivot);
        if (i < j) {
            swap(a[i], a[j]);
        }
        else {
            return j;
        }
    }
}

void GaySort (int l, int r) {
    if (l >= r) return;
    int fact = BaoGay(l, r);
    GaySort(l, fact);
    GaySort(fact + 1, r);
}

BaoisGay {
    int val;
    while (cin >> val) a[size] = val, size += 1;
    GaySort(0, size - 1);
    for (int i = 0; i < size; ++i) {
        cout << a[i];
        if (i < size - 1) cout << ' ';
    }
    BaoThichTu
}