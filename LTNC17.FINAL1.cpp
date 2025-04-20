#include <iostream>
using namespace std;
int main() {
    char a[1000] , c;
    int i = 1;
    while(cin >> c) {
        a[i] = c;
        i++;
    }
    int total = 0;
    for(int z = 1; z < i; z++) {
        if(z == 2) {
            if(a[2] == '+') total += (a[1] - '0') + (a[3] - '0');
            else total += (a[1] - '0') - (a[3] - '0');
        }
        if(z % 2 == 0 && z != 2) {
            if(a[z] == '+') total += (a[z + 1] - '0');
            else total -= (a[z + 1] - '0');
        }
    }
    cout << total;
    return 0;
}