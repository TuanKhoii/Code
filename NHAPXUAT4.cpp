#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>100)
    {
        cout<<(a%1000)/100;
    }    
    else {
        cout<<"-1";
    }
    return 0;
}