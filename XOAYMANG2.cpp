#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    
    for(int i=b;i<a;i++)cout<<arr[i]<<" ";
    for(int i=0;i<b;i++)cout<<arr[i]<<" ";
    return 0;
}