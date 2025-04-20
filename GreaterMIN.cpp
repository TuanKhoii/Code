//MINIGAME18.1:GreaterMIN
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min=a[0];
    int min1=1000000;
    for(int i=0; i < n; i++){
        if(a[i] < min)
            min=a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<min1 && a[i]>min){
            min1=a[i];
        }
    }
    if(min1==1000000){
        cout<<"NO";
    }else
        cout<<min1;
}