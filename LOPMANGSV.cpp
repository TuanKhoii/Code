#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
using namespace std;
class Diem{
    int n;    
    float array[100];
 public:
    Diem(){
        n=0;
        array[100]={0};
    }
    Diem(int n,float a[100]){
        for (int i=0;i<n;i++)
        {
            array[i]=a[i];
        }
    }
    Diem( Diem &a){
        n=a.n;
        for (int i=0;i<n;i++)
        {
            array[i]=a[i];
        }
    }
    void Setn(int x){
        n=x;
    }
    void Setarray(float a[100]){
        for (int i=0;i<n;i++)
        {
            array[i]=a[i];
        }
    }
    int Getn(){return n;}
    float DTB(){
        if (n==0) return 0;
        float sum=0;
        for (int i=0;i<n;i++){
            sum+=array[i];
        }
        return sum/n;
    }
    float Getsub(int pos){return array[pos];}
    friend istream& operator >> (istream &,Diem &);
    friend ostream& operator << (ostream &,Diem );
    float& operator [](int pos){
        return array[pos];
    }
    void operator = (Diem& b){
        n=b.n;
        for (int i=0;i<n;i++)
        {
            array[i]=b[i];
        }
        
    }
    ~Diem(){}
};

istream& operator >> (istream & is,Diem &a){
    a.n=0;
    string s;
    stringstream ss;
    getline(is,s);
    ss<<s;
    while(ss>>a[a.n])
    {
        a.n++;
    }
    return is;
}
ostream& operator << (ostream &os,Diem a){
    for (int i=0;i<a.n;i++)
    {
        os<<a[i]<<" ";
    }
    return os;
}

class SinhVien:public Diem{
    string ten;
    string mssv;
    Diem d;
    public:
    SinhVien(){
        ten="";
        mssv="";
    }
    SinhVien(string iten,string imssv,Diem id){ ten=iten;mssv=imssv;d=id;}
    SinhVien(SinhVien& a){
        ten=a.ten;
        mssv=a.mssv;
        d=a.d;
    }
    friend istream& operator >> (istream &,SinhVien &);
    friend ostream& operator << (ostream &,SinhVien );
    bool operator < (SinhVien &b){
        if (d.DTB()<b.d.DTB()) return true;
        return false;
    }
    void operator = (SinhVien &b){
        ten=b.ten;
        mssv=b.mssv;
        d=b.d;
    }
    Diem GetDiem(){return d;};
    ~SinhVien(){};
    
};
istream& operator >> (istream & is,SinhVien &a){
    getline(is,a.ten);
    while (a.ten=="") getline(is,a.ten);
    getline(is,a.mssv);
    is>>a.d;
    return is;
}
ostream& operator << (ostream &os,SinhVien a){
    os<<"Ho Ten: "<<a.ten<<endl;
    os<<"Ma Sinh Vien: "<<a.mssv<<endl;
    os<<"DTB: ";
    printf("%.1f",a.d.DTB());
    return os;
}
class MangSinhVien: public SinhVien {
    int n;
    SinhVien p[100];
    public:
    MangSinhVien(){n=0;}
    ~MangSinhVien(){}
    void Setn(int x){n=x;}
    int Getn(){return n;}
    void Setp(SinhVien a[100]){for (int i=0;i<n;i++){p[i]=a[i];}}
    SinhVien Getsubp(int x){return p[x];}
    friend istream& operator >> (istream & is,MangSinhVien &a);
    friend ostream& operator << (ostream &os,MangSinhVien a);
    SinhVien& operator [](int pos){
        return p[pos];
    }
    void operator =(MangSinhVien& b){
        n=b.n;
        for (int i=0;i<n;i++)
        {
           p[i]=b[i];
        }
    }
    float DTBMang(){
        float sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=p[i].GetDiem().DTB();
        }
        return sum;
    }
    SinhVien& Best(){
        int m=0;
        for (int i=0;i<n;i++)
        {
            if (p[m]<p[i]) m=i;
        }
        
        return p[m];
    }
};
istream& operator >> (istream & is,MangSinhVien &a){
    is>>a.n;
    is.ignore();
    for (int i=0;i<a.n;i++)
    {
        is>>a[i];
    }
    return is;
}
ostream& operator << (ostream &os,MangSinhVien a){
   os<<a.n<<endl;
   for (int i=0;i<a.n-1;i++)
   {
       os<<a[i]<<endl;
   }
   os<<a[a.n-1];
   return os;
}
int main(){
    
    MangSinhVien p;
    cin>>p;
    cout<<p.Best();
    
    return 0;
}
