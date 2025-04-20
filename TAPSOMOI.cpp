// operator=
// TapSoMoi()
#include <iostream>
using namespace std;
class SoMoi {
    private:
        int x , y , z , t;
    public:
        SoMoi(int x = 0, int y = 0, int z = 0, int t = 0) {
            this->x = x;
            this->y = y;
            this->z = z;
            this->t = t;
        }
        friend istream& operator >> (istream& is, SoMoi& a) {
            is >> a.x >> a.y >> a.z >> a.t;
            return is;
        }
        friend ostream& operator << (ostream& os, const SoMoi a) {
            os << "[TapSoMoi] " << a.x << ';' << a.y << ';' << a.z << ';' << a.t << endl;
            return os;
        }
        friend SoMoi operator + (const SoMoi& a, const SoMoi& b) {
            SoMoi result;
            result.x = a.x + b.x;
            result.y = a.y + b.y;
            result.z = a.z + b.z;
            result.t = a.t + b.t;
            return result;
        }
        friend bool operator < (const SoMoi& a, const SoMoi& b) {
            int tonga = a.x + a.y + a.z + a.t;
            int tongb = b.x + b.y + b.z + b.t;
            return tonga < tongb;
        }
        friend SoMoi operator ++ (const SoMoi& a, int) {
            SoMoi temp = a;
            temp.x++;
            temp.t++;
            return temp;
        }
}; 
int main() {
    SoMoi a, b;
    cin >> a >> b;
    cout << a << b;
    if(a < b) cout << "true" << endl;
    else cout << "false" << endl;
    cout << a + b;
    cout << a++;
}