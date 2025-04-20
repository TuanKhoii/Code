#include<iostream>
using namespace std;
int main()
{
    int a,mon,diem;
    diem=0;
    mon=0;
    float dtb;
    while(true) {
        cin>>a;
        if(a==-1) {
            break;
        }
        else {
        diem+=a;
        mon+=1;
        }
    }
    dtb=(float) diem/mon;
    if(dtb<4) {
        cout<<"F"; }
    else if(dtb<5.5) {
        cout<<"D";
    }
    else if(dtb<7) {
        cout<<"C";
    }
    else if(dtb<8.5) {
        cout<<"B";
    }
    else {
        cout<<"A";
    }
    return 0;
}