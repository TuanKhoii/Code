#include <iostream>
using namespace std;
int main() {
    int arr[200] = { 0 };
    char c;
    int i = 0;
    while(cin >> c) {
        arr[(int)c]++;
        i++;
    }
    int dem = 0;
    for(int a = 65; a <= 127; a++) {
        if(arr[a] != 0) dem++;
    }
    cout << dem;
    return 0;
}