#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isSquare(int n) {
    int kq = sqrt(n);
    return kq * kq == n;
}

int main() {
    vector<int> arr;
    int n;
    while(cin >> n && n != -1) {
        arr.push_back(n);
    }
    
    vector<int> b;
    for(int i = 0; i < arr.size(); ++i) {
        if(!isSquare(arr[i])) 
            b.push_back(arr[i]);
    }
    sort(b.begin(), b.end());
    for(int num : b) {
       if(num % 2 == 0) cout << num << " ";
    }

    return 0;
}
