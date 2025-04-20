#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct BaiCao {
    string a, b, c;
};
bool isWin(BaiCao Vip) {
    return Vip.a != "A" && Vip.b != "A" && Vip.c != "A" && isalpha(Vip.a[0]) && isalpha(Vip.b[0]) && isalpha(Vip.c[0]); 
}
istream& operator >> (istream& is, BaiCao& a) {
    is >> a.a >> a.b >> a.c;
    return is;
}
int tinhDiem(BaiCao Vip) {
    int diem = 0;
    if (Vip.a == "A") diem += 1;
    else if (isdigit(Vip.a[0]) && Vip.a != "10") diem += (Vip.a[0] - '0');
    else diem += 10;

    if (Vip.b == "A") diem += 1;
    else if (isdigit(Vip.b[0]) && Vip.b != "10") diem += (Vip.b[0] - '0');
    else diem += 10;

    if (Vip.c == "A") diem += 1;
    else if (isdigit(Vip.c[0]) && Vip.c != "10") diem += (Vip.c[0] - '0');
    else diem += 10;

    diem %= 10;
    return diem;
}


int main() {
    string win = ""; 
    vector<int> arr(5);
    BaiCao Su, Lu, Bu, Ti, Teo; 
    int diemSu = 0, diemLu = 0, diemBu = 0, diemTi = 0, diemTeo = 0;
    cin >> Su >> Lu >> Bu >> Ti >> Teo;
    if(isWin(Su)) win += "Su ";
    else diemSu = tinhDiem(Su);
    if(isWin(Lu)) win += "Lu ";
    else diemLu = tinhDiem(Lu);
    if(isWin(Bu)) win += "Bu ";
    else diemBu = tinhDiem(Bu);
    if(isWin(Ti)) win += "Ti ";
    else diemTi = tinhDiem(Ti);
    if(isWin(Teo)) win += "Teo";
    else diemTeo = tinhDiem(Teo);
    if(win != "") cout << win;
    else {
        arr[0] = diemSu;
        arr[1] = diemLu;
        arr[2] = diemBu;
        arr[3] = diemTi;
        arr[4] = diemTeo;
        vector<int> a(5);
        a = arr;
        sort(arr.begin(), arr.end());
        int Max = arr.back();
        string players[5] = {"Su ", "Lu ", "Bu ", "Ti ", "Teo "};
        for (int i = 0; i < 5; ++i) {
            if (a[i] == Max) win += players[i];
        }
        cout << win;
    }
    
    return 0;
}
