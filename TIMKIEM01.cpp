#include <iostream>
#include <cmath>
using namespace std;

struct Tiso {
    int doi1, doi2;
};

int main() {
    int N;
    cin >> N;
    Tiso tisoList[100];
    for (int i = 0; i < N; i++) {
        cin >> tisoList[i].doi1 >> tisoList[i].doi2;
    }

    int maxChenhLech = 0;
    int maxTongBanThang = 0;
    Tiso result;

    // Tìm tỉ số có cách biệt lớn nhất
    for (int i = 0; i < N; i++) {
        int chenhLech = abs(tisoList[i].doi1 - tisoList[i].doi2);
        int tongBanThang = tisoList[i].doi1 + tisoList[i].doi2;

        if (chenhLech > maxChenhLech || (chenhLech == maxChenhLech && tongBanThang > maxTongBanThang)) {
            maxChenhLech = chenhLech;
            maxTongBanThang = tongBanThang;
            result = tisoList[i];
        }
    }
    cout << result.doi1 << " " << result.doi2 << endl;

    return 0;
}