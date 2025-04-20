#include<iostream>
#include<iomanip>
using namespace std;
int main (){

    int n;
    float res;
    cin >>n;
    res=0;
    for (int i=1;i<=n;i++){
        res +=1./(i*i*i);
    }
    cout << setprecision(4)<<res<<endl;
    return 0;
}