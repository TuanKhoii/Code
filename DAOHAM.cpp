#include<iostream>
#include<cmath>
using namespace std;


struct DaThuc{
    int bac;
    int hs[100];
    DaThuc DaoHam(){
    DaThuc f1;
    f1.bac=bac-1;
    for(int i=bac; i>0; i--){
        f1.hs[i-1]=hs[i]* i;
    }
    return f1;
    }
    DaThuc DaoHamC2(){
        DaThuc f2;
        f2=DaoHam().DaoHam();
        return f2;
    }
};

istream& operator >> (istream& is, DaThuc &f){
    is>>f.bac;
    for(int i=f.bac; i>=0; i--){
        is>>f.hs[i];
    }
    return is;
}
ostream& operator << (ostream& os, DaThuc f){
    bool first = true;
    if (f.bac<0) os<<0;
    else {
    for(int i=f.bac; i>=0; i--){
        if(f.hs[i]!=0){
            if(first){
                if(f.hs[i] < 0) os<<"-";
                if(abs(f.hs[i])!=1 || i==0){
                    os<<abs(f.hs[i]);
                }
                if(i>0) os<<"x";
                if(i>1) os<<"^"<<i;
                
                first = false;
            }
            else {
                if(f.hs[i]>0) os<<"+";
                if(f.hs[i]<0) os<<"-";
                if(abs(f.hs[i])!=1 || i==0){
                    os<<abs(f.hs[i]);
                }
                if(i>0) os<<"x";
                if(i>1) os<<"^"<<i;
            }
        }
    }
    }
    return os;
}

int main(){
    DaThuc dt;
    cin>>dt;
    
    cout<<dt<<endl;
    cout<<dt.DaoHam()<<endl;
    cout<<dt.DaoHamC2()<<endl;
    return 0;
} 