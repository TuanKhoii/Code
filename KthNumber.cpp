#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

ull calculateDigits(ull n, ull prev){
    ull count = 0, step = 1;
    while (true){
        if (prev + step - 1 <= n)
            count += step;
        else if (prev <= n)
            count += n - prev + 1;
        else
            break;
        prev *= 10;
        step *= 10;
    }
    return count;
}

ull findKthDigitPosition(ull n, ull k){
    vector<int> digits;
    ull result = 0, temp = k, current = 0;

    digits.push_back(0);
    while (temp)
        digits.push_back(temp % 10), temp /= 10;
    
    for (int i = digits.size() - 1; i >= 0; --i){
        for (int j = digits[i] - 1; j >= ((i == digits.size() - 1) ? 1 : 0); --j)
            result += calculateDigits(n, current * 10 + j);
        current = current * 10 + digits[i];
    }

    return result + digits.size() - 1;
}

int main(){
    ios::sync_with_stdio(false);

    ull k, m;

    cin >> k >> m;
    ull mid, lo = k, hi = (1ull << 63ull) - 1;

    while (lo < hi){
        mid = (lo + hi) >> 1;
        if (findKthDigitPosition(mid, k) >= m)
            hi = mid;
        else
            lo = mid + 1;
    }

    if (findKthDigitPosition(lo, k) != m)
        cout << "0";
    else
        cout << lo;

    return 0;
}
