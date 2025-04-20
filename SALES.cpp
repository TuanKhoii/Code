//MINIGAME10.1:SALES
#include <iostream>
#include <cmath>
using namespace std;
void Sort(int arr[] , int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) swap(arr[i] , arr[j]);
        }
    }
}
int main() {
    int n , m , arr[100000];
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Sort(arr , n);
    int total = 0;
    for(int i = 0; i < m; i++) {
        if(arr[i] <= 0) total += arr[i];
    }
    cout << abs(total);
    return 0;
}