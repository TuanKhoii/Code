//R5.3:BA_LOP_CNTT
#include <iostream>
#include <vector>
#define int long long
using namespace std;
void Result(int n) {
    int maxVal = 0;
    vector<int> cnttA(1000010, 0), cnttB(1000010, 0), cnttC(1000010, 0);

    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        cnttA[score]++;
        maxVal = max(score , maxVal);
    }
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        cnttB[score]++;
        maxVal = max(score , maxVal);
    }
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        cnttC[score]++;
        maxVal = max(score , maxVal);
    }

    int result = 0;
    for (int i = 1; i <= maxVal; ++i) {
        result += cnttA[i] * cnttB[i] * cnttC[i];
    }

    cout << result;
}
signed main() {
    int n;
    cin >> n;
    Result(n);
    return 0;
}
