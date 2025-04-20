#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    if(a==0&&b!=0){
        cout<<"VN";
    }
    else if(a==0&&b==0){
        cout<<"VSN";
    }
    else{
        float x=-b/a;
        cout<<setprecision(2)<<fixed<<x;
        
    }
    return 0;
}
