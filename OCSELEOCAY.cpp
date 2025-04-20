#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, M;
    cin >> A >> B >> M;

    int days = ceil((double)(M - A) / (A - B));

    // In kết quả
    cout << days + 1 << endl;

    return 0;
}