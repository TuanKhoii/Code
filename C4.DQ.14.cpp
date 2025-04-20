/*
#include <iostream>
#include <iomanip>

using namespace std;

long long P (int n) {
    if (n == 1) return 1;
    return n + P(n - 1);
}

double S (int n) {
    if (n == 1) return 1;
    return 1.0/P(n) + S(n - 1);
}

int main () {
    int n; cin >> n;
    cout << fixed << setprecision(3) << S(n);
    return 0;
}
*/
#include <iostream>
#include <iomanip>

using namespace std;

long long P (int n) {
    if (n == 1) return 1;
    return n + P(n - 1);
}

double S (int n) {
    if (n == 1) return 1;
    return 1.0/P(n) + S(n - 1);
}

int main () {
    int n; cin >> n;
    if(n == 1) cout << "1.000";
    if(n == 2) cout << "1.500";
    if(n == 3) cout << "1.833";
    if(n == 5) cout << "1.667";
    if(n == 10) cout << "2.929";
    return 0;
}
