#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<bool> kt(2 * n + 1, false), tg(2 * n + 1, false);

    kt[2 * n] = true;
    for (int i = 1; i <= k; ++i) {
        for (int j = 0; j <= 2 * n; ++j) {
            if (kt[j]) {
                if (j > 0)
                    tg[j - 1] = true;
                if (j % 2 == 0)
                    tg[j / 2] = true;
            }
        }
        kt = tg;
        fill(tg.begin(), tg.end(), false);
    }
    
    int s = 0;
    for (int i = 0; i <= 2 * n; ++i)
        s += kt[i];

    printf("%d\n", s);
    for (int i = 0; i <= 2 * n; ++i) {
        if (kt[i])
            printf("%.1f ", i / 2.0);
    }

    return 0;
}
