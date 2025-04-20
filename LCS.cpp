#include <iostream>
using namespace std;

struct LCS {
    string ten;
    int like, share, cmt, tongdiem;
};

void Sort(LCS arr[], int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(arr[i].tongdiem < arr[j].tongdiem) swap(arr[i], arr[j]);
        }
    }
}

int TongDiem(LCS a) {
    return a.like + a.share * 3 + a.cmt * 2;
}

void Print(LCS arr[]) {
    cout << arr[0].ten << endl;
    cout << arr[1].ten << endl;
    cout << arr[2].ten;
}

int main() {
    LCS a;
    LCS arr[100];
    int x = 0; 
    while(cin >> a.ten >> a.like >> a.cmt >> a.share) {
        if(a.ten == "000") break;
        arr[x] = a;
        arr[x].tongdiem = TongDiem(arr[x]);
        x++;
    }
    Sort(arr, x);
    Print(arr);
    return 0;
}
