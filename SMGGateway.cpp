#include <iostream>
#include <string>
using namespace std;
struct Slot {
    string maSo;
    string soDienThoai;
    string nhaMang;
};

void NhapThongTinSlot(Slot slots[], int N) {
    for (int i = 0; i < N; ++i) {
        cin >> slots[i].maSo >> slots[i].soDienThoai >> slots[i].nhaMang;
    }
}

void XuatThongTinSlot(Slot slots[], int N) {
    for (int i = 0; i < N; ++i) {
        cout << slots[i].maSo << ":" << slots[i].soDienThoai << ":" << slots[i].nhaMang << endl;
    }
}
void TimVaInThongTinSlotTheoNhaMang(Slot slots[], int N, string soDienThoai) {
    string dauSo = soDienThoai.substr(0, 3); // Lấy 3 kí tự đầu của số điện thoại nhập vào
    for (int i = 0; i < N; ++i) {
        if (slots[i].soDienThoai.substr(0, 3) == dauSo) {
            cout << slots[i].maSo << ":" << slots[i].soDienThoai << ":" << slots[i].nhaMang << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;
    Slot slots[N];
    NhapThongTinSlot(slots, N);
    string soDienThoaiCanTim;
    cin >> soDienThoaiCanTim;
    TimVaInThongTinSlotTheoNhaMang(slots, N, soDienThoaiCanTim);
    return 0;
}