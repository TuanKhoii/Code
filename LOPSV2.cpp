#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Diem {
private:
    float* diem_list;
    int so_mon_hoc;

public:
    Diem(float* diem_list, int so_mon_hoc) {
        this->diem_list = diem_list;
        this->so_mon_hoc = so_mon_hoc;
    }

    float tinh_diem_trung_binh() {
        if (so_mon_hoc == 0)
            return 0;
        
        float sum = 0;
        for (int i = 0; i < so_mon_hoc; ++i) {
            sum += diem_list[i];
        }
        return sum / so_mon_hoc;
    }
};

class SinhVien {
private:
    string ho_ten;
    string ma_sinh_vien;
    Diem* diem;

public:
    SinhVien(string ho_ten, string ma_sinh_vien, Diem* diem) {
        this->ho_ten = ho_ten;
        this->ma_sinh_vien = ma_sinh_vien;
        this->diem = diem;
    }

    void xuat_thong_tin() {
        cout << "Ho Ten: " << ho_ten << endl;
        cout << "Ma Sinh Vien: " << ma_sinh_vien << endl;
        cout << "DTB: " << setprecision(2) << diem->tinh_diem_trung_binh() << endl;
    }
};

int main() {
    string ho_ten, ma_sinh_vien;
    getline(cin, ho_ten);
    getline(cin, ma_sinh_vien);
    
    float diem;
    int i = 0;
    float* diem_list = new float[100001];
    while(cin >> diem) {
        diem_list[i] = diem;
        ++i;
    }
    
    Diem* diem_sv = new Diem(diem_list, i);
    SinhVien sv(ho_ten, ma_sinh_vien, diem_sv);

    sv.xuat_thong_tin();

    delete[] diem_list;
    delete diem_sv;

    return 0;
}
