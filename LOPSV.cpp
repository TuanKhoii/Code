#include <iostream>
#include <iomanip>
using namespace std;

class Human {
    string hoten, quequan;
    int namsinh;
public:
    string getHoten() const { return hoten; }
    string getQuequan() const { return quequan; }
    int getnamsinh() const { return namsinh; }
    friend istream& operator >> (istream& is, Human& a) {
        getline(is , a.hoten);
        is >> a.namsinh;
        is.ignore();
        getline(is , a.quequan);
        return is;
    }
    friend ostream& operator << (ostream& os, const Human& a) {
        os << "Ho Ten: " << a.hoten << endl;
        os << "Nam Sinh: " << a.namsinh << endl;
        os << "Que quan: " << a.quequan << endl;
        return os;
    }
};

class SinhVien : public Human {
    string khoa;
    int diem[100] , dtb = 0 , mon = 0;
public: 
    friend istream& operator >> (istream& is, SinhVien& a) {
        is >> static_cast<Human&>(a) >> a.khoa;
        int d;
        while(is >> d) {
            a.diem[a.mon] = d;
            a.dtb += d;
            a.mon++;
        }
        return is;
    }
    friend ostream& operator << (ostream& os, const SinhVien& a) {
        os << static_cast<const Human&>(a);
        os << "Khoa: " << a.khoa << endl;
        os << "Diem cac mon: ";
        for(int i = 0; i < a.mon; ++i) {
            os << a.diem[i] << ' ';
        }
        os << endl;
        os << "Diem trung binh: " << fixed << setprecision(2) << a.DiemTB();
        return os;
    }
    double DiemTB() const {
        if (mon == 0) return 0; // Avoid division by zero
        return static_cast<double>(dtb) / mon;
    }
};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
