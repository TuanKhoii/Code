#include <iostream>
using namespace std;
class HCN {
    int dai, rong;
    public:
        HCN(int dai = 0 , int rong = 0) : dai(dai) , rong(rong) {};
        void ChuVi() {
            cout << (dai + rong) * 2 << endl;
        }
};
class HV : public HCN {
    int canh;
    public:
        HV(int canh) : HCN(canh , canh) {};
};
int main() {
    char c;
    while(cin >> c) {
        if(c == 'a') {
            int a;
            cin >> a;
            HV hinh(a);
            hinh.ChuVi();
        }
        else {
            int a, b;
            cin >> a >> b;
            HCN hinh(a , b);
            hinh.ChuVi();
        }
    }
    return 0;
}