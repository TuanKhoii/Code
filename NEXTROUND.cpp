//MINIGAME23.1:NEXTROUND
#include <iostream>
using namespace std;

int main() {
    int n, k, arr[50];
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
            if (count == k) {
                int nextIndex = i + 1;
                while (nextIndex < n && arr[nextIndex] == arr[i]) {
                    count++;
                    nextIndex++;
                }
                break; 
            }
        }
    }

    cout << count << endl;
    
    return 0;
}