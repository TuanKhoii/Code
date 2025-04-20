//Div2.MINIGAME29.2:MAXMIN
#include <iostream>
using namespace std;
int main() {
    int n , arr[150];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int max = arr[n - 1];
    int min = arr[0];
    int max2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < max) max2 = arr[i];
    }
    if(max2 == 0) cout << max - min; 
    else cout << max2 - min;
    return 0;
}