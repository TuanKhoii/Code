#include <bits/stdc++.h>
using namespace std;
class phanso{
    int tu,mau;
public:
    phanso(int _tu = 0,int _mau = 1){
        tu = _tu;
        mau = _mau;
    }phanso(const phanso &p){
        tu = p.tu;
        mau = p.mau;
    }
    ~phanso(){}
    friend istream& operator >>(istream &in,phanso &p){
        in >> p.tu >> p.mau;
        return in;
    }
    friend ostream& operator <<(ostream& out,phanso p){
        out <<p.tu <<"/"<<p.mau;
        return out;
    }
    int getTu(){return tu;}
    int getMau(){return mau;}
    
    phanso operator +(phanso a){
        phanso kq;
        kq.tu = tu*a.mau+mau*a.tu;
        kq.mau = mau*a.mau;
        return kq;
    }
    phanso operator *(int k){
        phanso tich;
        tich.tu = k*tu;
        tich.mau = mau;
        return tich;
    }
    
};
class honso : public phanso{
    int so;
    phanso a;
public:
    honso(int _so = 0,phanso _a = 0/1){
        so = _so;
        a = _a;
    }
    honso(const honso &h){
        so = h.so;
        a = h.a;
    }
    ~honso(){}
    int getSo(){return so;}
    phanso getPS(){return a;}
    friend istream& operator >>(istream &in,honso &p){
        in >> p.so >> p.a;
        return in;
    }
    friend ostream& operator <<(ostream& out,honso p){
        out << p.so <<" " << p.a;
        return out;
    }
    honso operator +(honso z){
        honso d;
        d.so = z.so + so;
        d.a = z.a + a;
        return d;
    }
};
int main(){
    honso d,b;
    cin >> d >> b;
    cout << d + b;
    return 0;
}