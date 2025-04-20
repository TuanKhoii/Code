//Div2.MINIGAME30.3:UPDATE.ARR
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> diff_array(N + 1, 0);
    for (int i = 0; i < M; ++i) {
        int a, b, k;
        cin >> a >> b >> k;
        diff_array[a] += k;
        if (b + 1 <= N) {
            diff_array[b + 1] -= k;
        }
    }

    long long max_value = 0;
    long long current = 0;
    for (int i = 1; i <= N; ++i) {
        current += diff_array[i];
        max_value = max(max_value, current);
    }

    cout << max_value << endl;

    return 0;
}
