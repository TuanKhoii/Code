#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=a*10+b*20+c*30+d*40;
    cout<<e<<endl;
    if(e==0) { cout<<"Coder So Sinh"; }
    else if(e<50) { cout<<"Coder Lop Mam"; }
    else if(e<100) { cout<<"Coder Lop Choi"; }
    else if(e<500) { cout<<"Coder Lop La"; }
    else if(e<1000) { cout<<"Coder Tieu Hoc"; }
    else if(e<1500) { cout<<"Coder THCS"; }
    else if(e<2000) { cout<<"Coder THPT"; }
    else if(e<2500) { cout<<"Coder Trung Cap"; }
    else if(e<3500) { cout<<"Coder Cao Dang"; }
    else if(e<4200) { cout<<"Coder Dai Hoc"; }
    else if(e<5500) { cout<<"Coder Thac Si"; }
    else if(e<7000) { cout<<"Coder Tien Si"; }
    else { cout<<"Coder Giao Su"; }
    return 0;
}