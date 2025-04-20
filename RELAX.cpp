#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long nguyen = n / 7;
    int du = n % 7;
    
    long long minRestDays = nguyen * 2;
    long long maxRestDays = minRestDays;

    if (du >= 2) {
        maxRestDays += 2;
    } else if (du == 1) {
        maxRestDays += 1;
    }
    if(du == 6) minRestDays++;
    cout << minRestDays << " " << maxRestDays << endl;

    return 0;
}

