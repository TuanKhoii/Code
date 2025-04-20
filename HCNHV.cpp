#include <iostream>
using namespace std;
class HCN {
    int dai, rong;
public:
    void setDai(int k) { dai = k; }
    void setRong(int k) { rong = k; }
    int getDai() { return dai; }
    int getRong() { return rong; }
    HCN(int _dai = 0, int _rong = 0) { dai = _dai; rong = _rong; }
    HCN(const HCN &h) { dai = h.dai; rong = h.rong; }
    friend istream& operator >> (istream& is, HCN &h) {
        is >> h.dai >> h.rong;
        return is;
    }
    friend ostream& operator << (ostream& os, HCN h) {
        os << h.dai << " " << h.rong; 
        return os;
    }
    int CV() { return (dai+rong)*2; }
};
class HV: public HCN {
    int canh;
public:
    void setCanh(int k) { 
        canh = k;
        // HCN::setDai(k);
        // HCN:setRong(k);
    }
    int getCanh() { return canh; }
    HV(int _canh = 0): HCN(_canh, _canh) {
        canh = _canh;
    }
    HV(const HV &h): HCN(h) {
        canh = h.canh;
    }
    friend istream& operator >> (istream& is, HV &h) {
        int canh;
        is >> canh;
      
        return is;
    }
    friend ostream& operator << (ostream& os, HV h) {
        os << h.canh << endl;
        return os;
    }
};
int main () {
    string c;
    int max = -100000;
    getline(cin, c);
    // spam cái cc
    if(c == "HCN") {
        int x, y;
        while(cin >> x >> y) {
            HCN h(x, y);
            if(h.CV() > max) max = h.CV();
        }
    }
    else if(c == "HV") {
        int x;
        while(cin >> x) {
            HV h(x);
            if(h.CV() > max) max = h.CV();
        }
    }
    cout << max;
}