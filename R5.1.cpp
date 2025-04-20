//R5.1:NOT.IN.ARRAY
#include <iostream>
using namespace std;
void Print() {
    int n , x , count[1000000] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        count[x]++;
    }
    for(int i = 0; i < 1000000; i++) {
        if(count[i] == 0) {
            cout << i;
            break;
        }
    }
}
int main() {
    Print();
    return 0;
}